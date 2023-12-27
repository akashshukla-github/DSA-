//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "enter value of base : ";
    cin >> a;
    cout << "enter the exponent : ";
    cin >> b;
    float power = 1;
    bool flag = true;
    if (b < 0)
    {
        flag = false;
        b = -b;
    }

    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    
    if (flag == false)
    {
        power = 1 / power;
        b = -b;
    }
    if (a == 0 && b == 0)
    {
        cout << "its not defined";
    }
    else
    {
        cout << a << " raised to power " << b << " is  " << power;
    }

    return 0;
}
