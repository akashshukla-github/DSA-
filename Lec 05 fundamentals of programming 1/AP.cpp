//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    // 1 3 5 7 9 11 13 15 .........
    int n;
    cout << "enter value of n : ";
    cin >> n;
    // for (int i = 1; i <= (2 * n - 1); i += 2)
    // {
    //     cout << i << " ";
    // }

    // ALTERNATE WAY

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + 2;
    }

    return 0;
}
