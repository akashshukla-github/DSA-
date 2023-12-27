//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *ptr = &x;
    cout << ptr << endl;    //0x61ff08
    ptr += 1;
    cout << ptr << endl;    //0x61ff0c

    return 0;
}
