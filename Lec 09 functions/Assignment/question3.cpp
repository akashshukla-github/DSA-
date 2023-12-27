//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
int odd(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        
        if (i % 2 == 0)
            continue;
        cout << i << endl;
        }
        
}
int main()
{
    int a;
    cout << "enter initial limit : ";
    cin >> a;
    int b;
    cout << "enter final limit : ";
    cin >> b;
    odd(a, b);

    return 0;
}
