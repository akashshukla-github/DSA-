//          JAI SHREE RAM          //

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v; // you need not mention size
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);
    cout << "size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "size is : " << v.size() << endl;
    cout << "capacity is : " << v.capacity() << endl;
    return 0;
}
