// 2) Saddle point

#include <iostream>
using namespace std;

class Matrix
{
public:
    int m, n, a[10][10],p = 0, q = 0, s = 0, t = 0;
    int max, min;
    int i,j,k;
    void matrix()
    {
        cout << " Enter number of rows: " << endl;
        cin >> m;

        cout << "Enter number of columns: " << endl;
        cin >> n;

        cout << "Enter elements of matrix: " << endl;

        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                cout << "Enter element a" << i + 1 << j + 1 << ":";
                cin >> a[i][j];
            }
        for (i = 0; i < m; i++)
        {

            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << endl;
    }

    void saddle()
    {
        for (i = 0; i < m; i++)
        {
            min = a[i][0];
            for (j = 0; j < n; j++)
            {
                if (min >= a[i][j])
                {
                    min = a[i][j];
                    p = i;
                    q = j;
                }
            }

            max = a[0][q];
            for (k = 0; k < m; k++)
            {
                if (max <= a[k][q])
                {
                    max = a[k][q];
                    s = k;
                    t = q;
                }
            }

            if (min == max)
                break;
        }
        if (p == s && q == t)
        {
            cout << "Saddle point " << min << " present at " << p + 1 << q + 1 << endl;
        }
        else
            cout << "Saddle point not present." << endl;
    }
};

int main()
{
    Matrix M;

    M.matrix();
    M.saddle();

    return 0;
}
