//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side of tringle : ";
    cin >> side;
    for (int i = 0; i < side; ++i)
    {
        for (int j = 0; j < side - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = i+1 ; j >= 1; --j)
        {
            cout << j<<" ";
        }

        cout << endl;
    }

    return 0;
}
