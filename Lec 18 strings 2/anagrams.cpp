//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s = "physicswallah";
    string t = "wallahphysics";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << s << endl;
    cout << t << endl;
    if (s == t)
    {
        cout << "strings are anagrams ";
    }
    else
    {
        cout << "strings are not anagrams ";
    }

    return 0;
}
