//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
float area(int x)
{
    return 3.1415 * x * x;
}
int main()
{
    int radius;
    cout << "enter radius of circle : ";
    cin >> radius;
    cout<<area(radius);

    return 0;
}
