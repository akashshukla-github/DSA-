//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "enter your problem : ";
    cin >> a >> op >> b;
    // if (op == '+')
    //     cout << a + b;
    // if (op == '-')
    //     cout << a - b;
    // if (op == '*')
    //     cout << a * b;
    // if (op == '/')
    //     cout << a / b;

    // ALTERNATE WAY

    switch (op)
    {
    case '+':
        cout << a + b;
    case '-':
        cout << a - b;
    case '*':
        cout << a * b;
    case '/':
        cout << a / b;
    }
    return 0;
}
