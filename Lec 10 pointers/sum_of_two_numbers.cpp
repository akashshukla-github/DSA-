//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    //     int a = 18;
    //     int b = 15;
    //     int *p = &a;
    //     int *q = &b;
    //     int sum = *p + *q;
    //     cout << sum;
    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "enter first number : ";
    cin >> *p1;
    cout << "enter second number : ";
    cin >> *p2;
    cout << *p1 + *p2 << endl;
    cout << x + y;
    return 0;
}
