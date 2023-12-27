//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    string s;
    cout << "enter the string : " << endl;
    getline(cin, s);
    int l = s.length();
    cout << s.substr(l / 2);

    return 0;
}
