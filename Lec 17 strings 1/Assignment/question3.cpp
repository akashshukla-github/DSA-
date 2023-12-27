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
    int i = 0;
    int j = l - 1;
    bool flag = true;
    while (i < j)
    {
        if (s[i] != s[j])
            flag = false;
        i++;
        j--;
    }
    if (flag == true)
    {
        cout << "string is palindrome ";
    }
    else
        cout << "string is not palindrome";

    return 0;
}
