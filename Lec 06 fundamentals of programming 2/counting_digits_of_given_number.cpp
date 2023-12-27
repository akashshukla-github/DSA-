//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int count = 0;
    if (n == 0)
        count++;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Total number of digits in given number is : " << count;

    return 0;
}
