#include <iostream>
using namespace std;

#define MAX 30

struct Node {
    string data;
    Node *next;
};

class BFS {
public:
    int n, edges;
    string vertex;
    Node *head[MAX];

    BFS() {
        for (int i = 0; i < MAX; i++) {
            head[i] = NULL;
        }
    }

    void graph() {
        cout << "Enter the number of vertices: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "Enter the vertex " << i << ": ";
            cin >> vertex;
            head[i] = new Node;
            head[i]->data = vertex;
            head[i]->next = NULL;
            cout << "Enter the number of adjacent edges to the vertex: ";
            cin >> edges;
            Node *curr = head[i];
            for (int j = 0; j < edges; j++) {
                Node *adj = new Node;
                cout << "Enter adjacent vertex " << j << " of " << vertex << ": ";
                cin >> adj->data;
                adj->next = NULL;
                curr->next = adj;
                curr = curr->next;
            }
        }
    }

    void adjacency_list() {
        for (int i = 0; i < n; i++) {
            cout << head[i]->data << "->";
            Node *curr = head[i]->next;
            while (curr != NULL) {
                cout << curr->data << "->";
                curr = curr->next;
            }
            cout << "NULL" << endl;
        }
    }

    void bfs(int start) {
        bool visited[MAX] = { false };
        visited[start] = true;
        int queue[MAX];
        int front = 0, rear = 0;
        queue[rear++] = start;

        while (front < rear) {
            int curr = queue[front++];
            cout << head[curr]->data << " ";

            Node *adj = head[curr]->next;
            while (adj != NULL) {
                int index = get_vertex_index(adj->data);
                if (!visited[index]) {
                    visited[index] = true;
                    queue[rear++] = index;
                }
                adj = adj->next;
            }
        }
        cout<<endl;
    }

    int get_vertex_index(string v) {
        for (int i = 0; i < n; i++) {
            if (head[i]->data == v) {
                return i;
            }
        }
        return -1;
    }
};


int main()
{
    int x,t=1;
    BFS b;
    while(t == 1)
    {
        cout<<"Enter\n1.Create graph\n2. Display Adjacency list\n3.BFS\n4.exit: \n";
        cin>>x;
        switch(x)
        {
            case 1 : b.graph();
            break;
            case 2 : b.adjacency_list();
            break;
            case 3 : b.bfs(0);
            break;
            case 4 : t=0;
            break;
        }
    }
    return 0;
}