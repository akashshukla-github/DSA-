//          JAI SHREE RAM          //

#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
        cout << endl;
    }
    cout << max;

    return 0;
}
