//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    // int arr[3][3];
    // rows:-3 and coloum:-3
    // int arr[0][0]=4;
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << arr[1][2];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
