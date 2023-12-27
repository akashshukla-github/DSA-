//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side of tringle : ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        // spaces
        for (int j = 1; j <= side - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
