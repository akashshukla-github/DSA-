//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string str = "akash        is   a    coder";
    stringstream ss(str);
    string temp;
    while (ss >> temp)
    {
        cout << temp << endl;
    }

    return 0;
}
