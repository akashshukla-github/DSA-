//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    int a = 1, b = 1, fibo = 0;
    cout << a << endl;
    cout << b << endl;
    for (int i = 1; i <= n - 2; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
        cout << fibo << endl;
    }

    return 0;
}
