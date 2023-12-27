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
        for (int j = i; j>=1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
