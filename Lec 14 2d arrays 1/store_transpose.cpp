//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "enter the number of rows :";
    cin >> m;
    int n;
    cout << "enter the number of columns :";
    cin >> n;
    int arr[m][n];
    cout << "enter array elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // store the transpose

    int t[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            t[i][j] = arr[j][i];
        }
    }

    //printing transpose 
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
