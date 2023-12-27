//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enter n upto which u want to find factorials : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fact(i) << endl;
    }

    return 0;
}
