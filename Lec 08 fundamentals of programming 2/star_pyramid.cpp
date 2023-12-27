//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side : ";
    cin >> side;
    // for (int i = 1; i <= side; i++)
    // {
    //     for (int j = 1; j <= side - i ; j++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;

    //}

    //Alternate Way   

    
    int nst = 1;
    int nsp = side - 1;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }
        nst += 2;
        cout << endl;
    }

    return 0;
}
