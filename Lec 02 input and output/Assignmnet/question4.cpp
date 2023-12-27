//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    float radius, height, volume;
    cout << "enter the radius";
    cin >> radius;
    cout << "enter the height";
    cin >> height;
    float pi = 3.1415;
    volume = pi * radius * radius * height;
    cout << "volume of the given cylinder is: " << volume;

    return 0;
}
