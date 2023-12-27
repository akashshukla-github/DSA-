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
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << endl;
    }
    cout << sum;

    return 0;
}
