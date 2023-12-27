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
        for (int j = 1; j <= side; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
