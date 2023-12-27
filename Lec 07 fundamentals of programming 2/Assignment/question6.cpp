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
    int i, j;
    for (i = 1; i <= r; i++)
    {

        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j ==c )
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}
