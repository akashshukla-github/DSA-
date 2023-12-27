//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter number of rows : ";
    cin >> side;
    // for (int i = 1; i <= side; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= side; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Alternate way
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}
