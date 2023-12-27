//          JAI SHREE RAM          //

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(8);
    v.push_back(9);
    v.push_back(7);
    int n = v.size();
    int x = 4;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
            count++;
    }
    cout << count;
    return 0;
}
