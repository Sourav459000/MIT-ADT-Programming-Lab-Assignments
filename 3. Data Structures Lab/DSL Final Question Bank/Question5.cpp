#include <iostream>
using namespace std;
struct polynomial
{
    int coef;
    int exp;
};
int main()
{
    struct polynomial a[10], b[10], c[10];
    int m, n, i;
    cout << "1st polynomial";
    cout << "\nenter no. of terms:";
    cin >> m;
    cout << "Note : Enter exponent in high to low order ";
    for (i = 0; i < m; i++)
    {
        cout << "\nTerm" << i + 1 << ":";
        cout << "\nenter coefficient:";
        cin >> a[i].coef;
        cout << "enter expo:";
        cin >> a[i].exp;
    }
    cout << "\nPolynomial 1: ";
    for (i = 0; i < m; i++)
    {
        if (a[i].exp != 0)
            cout << a[i].coef << "x^" << a[i].exp << " + ";
        else
            cout << a[i].coef;
    }

    cout << "\n\n2nd polynomial";
    cout << "\nenter no. of terms:";
    cin >> n;
    cout << "Note : Enter exponent in high to low order ";
    for (i = 0; i < n; i++)
    {
        cout << "\nTerm" << i + 1 << ":";
        cout << "\nenter coefficient:";
        cin >> b[i].coef;
        cout << "enter expo:";
        cin >> b[i].exp;
    }
    cout << "\nPolynomial 2: ";
    for (i = 0; i < n; i++)
    {
        if (b[i].exp != 0)
            cout << b[i].coef << "x^" << b[i].exp << " + ";
        else
            cout << b[i].coef;
    }
    cout << "\n\n------Polynomial Addition-------";
    int j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < m && j < n)
    {
        if (a[i].exp == b[j].exp)
        {
            c[k].coef = a[i].coef + b[j].coef;
            c[k].exp = a[i].exp;
            i = i + 1;
            j = j + 1;
            k = k + 1;
        }
        else if (a[i].exp > b[j].exp)
        {
            c[k].coef = a[i].coef;
            c[k].exp = a[i].exp;
            i = i + 1;
            k = k + 1;
        }
        else
        {
            c[k].coef = b[j].coef;
            c[k].exp = b[j].exp;
            j = j + 1;
            k = k + 1;
        }
    }
    cout << "\n\nAdded Polynomial: ";
    for (i = 0; i < k; i++)
    {
        if (c[i].exp != 0)
        {
            cout << c[i].coef << "x^" << c[i].exp << " + ";
        }
        else
        {
            cout << c[i].coef;
        }
    }
    cout << "\n\n-------Polynomial Multiplication-------";
    k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[k].coef = a[i].coef * b[j].coef;
            c[k].exp = a[i].exp + b[j].exp;
            k = k + 1;
        }
    }
    cout << "\n\nMultiplied Polynomial: ";
    for (i = 0; i < k; i++)
    {
        if (c[i].exp != 0)
        {
            cout << c[i].coef << "x^" << c[i].exp << " + ";
        }
        else
        {
            cout << c[i].coef;
        }
    }
    return 0;
}