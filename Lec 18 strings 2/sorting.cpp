//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    // cin >> s;
    getline(cin, s);
    int n = s.length();
    sort(s.begin(), s.end());
    // reverse(s.begin(),s.end());
    cout << s << endl;

    return 0;
}
