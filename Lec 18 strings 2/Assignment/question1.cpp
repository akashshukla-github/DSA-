//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cout << "enter the string : ";
    cin >> s;
    string t = s;
    reverse(s.begin(), s.end());
    cout << t + s;
    

    return 0;
}
