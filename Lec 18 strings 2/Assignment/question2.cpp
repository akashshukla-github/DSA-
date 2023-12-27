//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    cout << "enter the string ";
    cin >> str;
    vector<int>s;
    for(int i=0;i<str.size();i++){
        s.push_back(i);
    }
    int max = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        if (max < s[i])
            max = s[i];
    }
    int smax = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (smax < s[i] && smax < max)
            smax = s[i];
    }
    cout << smax;
    return 0;
}
