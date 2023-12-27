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
    
    //printing transpose

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
