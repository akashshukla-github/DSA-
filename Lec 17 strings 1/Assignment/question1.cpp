//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    cout << "enter the string : " << endl;
    string s;
    getline(cin, s);
    cout << s << endl;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (i % 2 != 0)
            s[i] = '#';
    }
    cout << s << endl;

    return 0;
}
