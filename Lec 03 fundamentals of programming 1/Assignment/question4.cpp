//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int length, breadth;
    cout << "enter the length of the rectangle : ";
    cin >> length;
    cout << "enter the breadth of the rectangle : ";
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << "area is greater than its primeter";
    }
    else
    {
        cout << "perimeter is greater than its area";
    }

    return 0;
}
