//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "enter the year : ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "its a leap year";
    }
    else
    {
        cout << "its not a leap year";
    }

    return 0;
}
