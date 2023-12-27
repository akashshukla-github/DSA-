//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int x = 19;
    int *p = &x;
    cout << x << endl; // 19
    *p = 6;
    cout << x;

    return 0;
}
