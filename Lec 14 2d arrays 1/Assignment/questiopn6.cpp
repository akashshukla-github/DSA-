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
        cout << "The elements of the middle row and middle column are as follows : " << endl;
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == n / 2 or j == m / 2)
                    cout << a[i][j] << " ";
            }
        }
        return 0;
    }
