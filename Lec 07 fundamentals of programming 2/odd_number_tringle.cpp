//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side of tringle : ";
    cin >> side;
    // for (int i = 1; i <= side; i++)
    // {
    //     for (int j = 1; j <= 2 * i - 1; j += 2)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Alternat Way
    for (int i = 1; i <= side; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a<<" ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}
