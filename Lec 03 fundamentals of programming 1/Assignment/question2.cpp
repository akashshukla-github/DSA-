//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int radius;
    cout << "enter the radius : ";
    cin >> radius;
    float circumference = 2 * 3.1415 * radius;
    float area = 3.1415 * radius * radius;
    cout << "area of circle is : " << area << endl;
    cout << "circumference of the circle is : " << circumference << endl;
    if (area > circumference)
    {
        cout << "area of the circle is larger than its circumference";
    }
    else
    {
        cout << "circumference of the circle is larger than its area";
    }

    return 0;
}
