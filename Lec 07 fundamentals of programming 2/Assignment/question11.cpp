//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "enter the side : ";
    cin >> side;
    for (int i = 0; i < side; ++i)
    {
        for (int j = 0; j < side - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < side - 1; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout<< " ";
        }
        for (int j = 0; j < side-i-1; ++j)
        {
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}
