//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string s = "akash is a dsa coder. he is maths teacher as well";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    cout << endl;
    sort(v.begin(), v.end());
    int maxcount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxcount = max(count, maxcount);
    }
    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (maxcount == count)
        {
            cout << v[i] << " " << maxcount << endl;
        }
    }

    return 0;
}
