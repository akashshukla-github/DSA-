//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
void digits(int n)
{
    int count = 0;
    cout << n * n << endl;
    while (n)
    {
        n = n / 10;
        count++;
    }
    cout << count;
}
int main()
{
    int num;
    cout << "enter your number : ";
    cin >> num;
    digits(num);

    return 0;
}
