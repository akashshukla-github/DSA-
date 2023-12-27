//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side : ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k<<" ";
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout << l<<" ";
        }
        cout << endl;
    }

    return 0;
}
