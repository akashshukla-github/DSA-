//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side : ";
    cin >> side;
    int nst = 1;
    int nsp = side - 1;
    for (int i = 1; i <= 2 * side - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        if (i >= side)
            nsp++;
        else
            nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        if (i >= side)
            nst -= 2;
        else
            nst += 2;
        cout << endl;
    }

    return 0;
}
