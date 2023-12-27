//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side : ";
    cin >> side;
    for (int i = 1; i <= side + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
                cout << j << " ";
            else
                cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}
