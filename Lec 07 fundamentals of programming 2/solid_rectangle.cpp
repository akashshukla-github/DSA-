//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cout << "enter number of rows : ";
    cin >> r;
    cout << "enter number of coloums : ";
    cin >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
