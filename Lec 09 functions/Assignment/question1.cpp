//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
int square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << endl;
    }
}
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    square(n);

    return 0;
}
