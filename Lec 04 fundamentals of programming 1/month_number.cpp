//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "enter month number : ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "january 31";
        break;
    case 2:
        cout << "feburary 28";
        break;
    case 3:
        cout << "march 31";
        break;
    case 4:
        cout << "april 30";
        break;
    case 5:
        cout << "may 31 ";
        break;
    case 6:
        cout << "june 30";
        break;
    case 7:
        cout << "july 31";
        break;
    case 8:
        cout << "august 31 ";
        break;
    case 9:
        cout << "september 30";
        break;
    case 10:
        cout << "october 31";
        break;
    case 11:
        cout << "november 30";
        break;
    case 12:
        cout << "december 31";
        break;
    }

    // ALTERNATE WAY
    // 1 3 5 7 8 10 12 -> 31 days
    // 4 6 9 11 -> 30 days
    // 2-> 28 days

    // switch ((month <= 7 && month % 2 == 0) || (month >= 8 && month % 2 == 0))
    // {
    //     case 1:
    //     cout << "31";
    //     break;
    // }
    // switch (month == 4 || month == 6 || month == 9 || month == 11)
    // {
    //     case 1:
    //     cout << "30";
    //     break;
    // }
    // switch (month)
    // {
    //     case 2:
    //     cout << "28";
    // }

    return 0;
}
