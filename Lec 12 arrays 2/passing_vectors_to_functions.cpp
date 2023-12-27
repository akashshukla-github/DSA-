//          JAI SHREE RAM          //

#include <iostream>
#include <vector>
using namespace std;
// void change(vector<int> a)// vectors are passed by value and not by reference
// {
//     a[0] = 100;
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
void change(vector<int> &a) // here vectors are passed by reference
{
    a[0] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
