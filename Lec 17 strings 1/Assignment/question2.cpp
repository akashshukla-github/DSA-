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
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            continue;
        else
            sum++;
    }
    cout << sum;

    return 0;
}
