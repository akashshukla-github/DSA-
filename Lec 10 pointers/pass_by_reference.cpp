//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
void swap1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a;
    cout << "enter a : ";
    cin >> a;
    int b;
    cout << "enter b : ";
    cin >> b;
    swap1(&a, &b);
    cout << a << " " << b;

    return 0;
}
