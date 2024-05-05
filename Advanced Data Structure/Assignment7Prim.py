import sys

def min_key_vertex(key, mst_set, vertices):
    min_key = sys.maxsize
    min_vertex = None
    for v in vertices:
        if key[v] < min_key and mst_set[v] == False:
            min_key = key[v]
            min_vertex = v
    return min_vertex


def print_mst(parent, graph):
    print("Edge \tWeight")
    for i in range(1, len(parent)):
        print(f"{parent[i]} - {i} \t{graph[i][parent[i]]}")


def prim_mst(graph):
    vertices = list(graph.keys())
    key = {v: sys.maxsize for v in vertices}
    parent = {v: None for v in vertices}
    key[0] = 0 
    mst_set = {v: False for v in vertices}

    for _ in range(len(vertices)):
        u = min_key_vertex(key, mst_set, vertices)
        mst_set[u] = True 

        for v in vertices:
            if graph[u][v] > 0 and mst_set[v] == False and key[v] > graph[u][v]:
                key[v] = graph[u][v]
                parent[v] = u

    print_mst(parent, graph)


if __name__ == "__main__":
    graph = {}
    num_vertices = int(input("Enter the number of vertices in the graph: "))
    for i in range(num_vertices):
        graph[i] = {}
        for j in range(num_vertices):
            weight = int(input(f"Enter the weight of edge ({i}, {j}): "))
            graph[i][j] = weight

    print("\nMinimum Spanning Tree using Prim's Algorithm:")
    prim_mst(graph)