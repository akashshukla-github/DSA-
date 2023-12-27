//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int ld, reverse = 0;
    int a = n;
    while (n > 0)
    {
        reverse *= 10;
        ld = n % 10;
        reverse += ld;
        n = n / 10;
    }
    cout << "reverse of " << a << " is " << reverse << endl;
    cout << "The sum of the number and its reverse is : " << a + reverse;

    return 0;
}
