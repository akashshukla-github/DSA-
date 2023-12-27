//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    int a, sum = 0;
    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        if (a % 2 == 0)
        {
            sum += a;
        }
        else
        {
            sum += 0;
        }
    }
    cout << "The sum of even digits is " << sum;

    return 0;
}
