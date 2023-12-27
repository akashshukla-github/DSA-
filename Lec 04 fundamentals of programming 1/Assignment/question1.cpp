//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int amount;
    int n1, n2, n5, n10, n20, n50, n100, n200, n500, n2000;
    cout << "enter the amount : ";
    cin >> amount;
    switch (amount >= 2000)
    {
    case 1:
        n2000 = amount / 2000;
        amount -= n2000 * 2000;
        cout << "Number of 2000 rs notes are : " << n2000 << endl;
    }
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount -= n500 * 500;
        cout << "Number of 500 rs notes are : " << n500 << endl;
    }
    switch (amount >= 200)
    {
    case 1:
        n200 = amount / 200;
        amount -= n200 * 200;
        cout << "Number of 200 rs notes are : " << n200 << endl;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount -= n100 * 100;
        cout << "Number of 100 rs notes are : " << n100 << endl;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount -= n2000 * 50;
        cout << "Number of 50 rs notes are : " << n50 << endl;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount -= n20 * 20;
        cout << "Number of 20 rs notes are : " << n20 << endl;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount -= n10 * 10;
        cout << "Number of 10 rs notes are : " << n10 << endl;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount -= n5 * 5;
        cout << "Number of 5 rs notes are : " << n5 << endl;
    }

    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount -= n2 * 2;
        cout << "Number of 2 rs notes are : " << n2 << endl;
    }

    switch (amount >= 1)
    {
    case 1:
        n1 = amount / 1;
        amount -= n1 * 1;
        cout << "Number of 1 rs notes are : " << n1 << endl;
    }

    return 0;
}
