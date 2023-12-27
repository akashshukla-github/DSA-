//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int a[n][m];
    cout << "Enter the matrix element : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j == n - 1) or (i == j))
                cout << a[i][j] << "  ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
