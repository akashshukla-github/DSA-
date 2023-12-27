//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
    ;
}
void swap2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;
}
int main()
{
    int a;
    cout << "enter a : ";
    cin >> a;
    int b;
    cout << "enter b : ";
    cin >> b;
    swap1(a, b);
    swap2(a, b);

    return 0;
}
