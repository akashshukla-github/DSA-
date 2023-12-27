//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    bool a = false;
    bool b = false;
    bool c = true;
    int p = 1;
    int q = 2;
    int r = 2;

    cout << (a == b == c)<<endl; //:- true (p==q)==r = 1==r = 1==1 = 1
    cout << (p == q == r); // :- false(p==q)==r = 0==r = 0==1 = 0

    return 0;
}
