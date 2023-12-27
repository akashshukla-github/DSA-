//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side of square : ";
    cin >> side;
    int mid = side / 2 + 1;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            if (i == mid || j == mid)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
