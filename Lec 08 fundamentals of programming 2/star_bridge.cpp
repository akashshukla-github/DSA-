//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter value of n ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout<<endl;
    int m=n-1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= m + 1 - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
