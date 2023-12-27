//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "enter the number of rows of 1st matrix :";
    cin >> m;
    int n;
    cout << "enter the number of columns of 1st matrix :";
    cin >> n;

    int p;
    cout << "enter the number of rows of 2nd matrix :";
    cin >> p;
    int q;
    cout << "enter the number of columns of 2nd matrix :";
    cin >> q;
    if (n == p)
    {
        int a[m][n];

        cout << "enter array elements for 1st matrix : " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        // print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        int b[p][q];
        cout << "enter array elements for 2nd matrix : " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        // print
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "matrices can not be multiplied : ";
    }

    return 0;
}
