//          JAI SHREE RAM          //

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v(5);// size mentioning is must for cin
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>v[i];
    // }
    vector<int> v; // size not important if using pushback 
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
