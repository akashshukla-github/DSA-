//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
//     int side;
//     cout << "enter the side of tringle : ";
//     cin >> side;
    // for (int i = side; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // alternate way
    // number of stars =n+1-i
    int side;
    cout << "enter the side of tringle : ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side + 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
