//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "enter first side os the tringle : ";
    cin >> a;
    cout << "enter second side os the tringle : ";
    cin >> b;
    cout << "enter third side os the tringle : ";
    cin >> c;
    if (a == b == c)
    {
        cout << "its a equialteral tringle";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "its a isoceles tringle";
    }
    else
    {
        cout << "its a scalene tringle";
    }

    return 0;
}
