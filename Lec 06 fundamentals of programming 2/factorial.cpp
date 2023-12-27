//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout << "fctorial of given number is : "<<factorial;

        return 0;
}
