//          JAI SHREE RAM          //

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v; // you need not mention size
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
    v.push_back(5);
    v.push_back(1);

    int x = 5;
    int idx = -1;
    // // forward loop
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == x)
    //         idx = i;
    // }

    // backward loop
    for (int i = v.size()-1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i;
            break;
        }
    }
    cout << idx;
    return 0;
}
