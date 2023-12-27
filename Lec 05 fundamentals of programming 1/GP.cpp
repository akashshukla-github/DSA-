//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    // 1,2,4,8,16,32 .........
    int n;
    cout << "enter n : ";
    cin >> n;
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << " ";
    //     a = a * 2;
    // }
    // 2,6,18,54 .........
    int a = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 3;
    }
    return 0;
}
