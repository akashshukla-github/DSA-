//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    string str = "akash";
    cout << str << endl;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            str[i] = 'a';
        }
    }

    return 0;
}
