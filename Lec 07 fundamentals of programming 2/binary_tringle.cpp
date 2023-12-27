//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side of tringle : ";
    cin >> side;
    int a = 1;
    // for (int i = 1; i <= side; i++)
    // {
    //     if (i % 2 != 0)
    //         a = 1;
    //     else
    //         a = 0;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << a << " ";
    //         if (a == 1)
    //             a = 0;
    //         else
    //             a = 1;
    //     }
    //     cout << endl;
    // }

    // if i and j both odd or even print 1 else print 0
    // sum of a odd and a even number is always even
    // if i+j%2==0 print 1 else print 0
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
