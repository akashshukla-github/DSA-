//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //         sum -= i;
    //     else
    //         sum += i;
    // }

    // Alternate Way
    // if n is even
    if (n % 2 == 0)
        sum = -n / 2;

    // if n is odd
    if (n % 2 != 0)
        sum = -n / 2 + n;

    cout << " sum of the alternate series 1-2+3-4+5-6+7-8+9....... is  " << sum;
    return 0;
}
