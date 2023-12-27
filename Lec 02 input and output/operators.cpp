//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int x = 3;
    // cout<<x==3;   :-throws an error
    cout << (x == 3) << endl; // true so throws 1
    cout << (x == 7) << endl; // false so throws 0
    cout << (x = 7) << endl;  // return 7 as = is a assignment operator not relational
    cout << (x += 8);

    return 0;
}
