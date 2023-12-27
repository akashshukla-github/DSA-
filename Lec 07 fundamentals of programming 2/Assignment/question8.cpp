//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main() {
    int side;
    cout << "enter the side of tringle : ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }


return 0;
}
