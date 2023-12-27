//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int a, reverse = 0;
    while (n > 0)
    {
        reverse = reverse * 10;
        a = n % 10;
        reverse += a;
        n /= 10;
    }
    cout<<"reversed number is :"<<reverse;
    return 0;
}
