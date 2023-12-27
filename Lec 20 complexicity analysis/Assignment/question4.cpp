//          JAI SHREE RAM          //

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    int c = 0;
    for (int i = n; i > 0; i /= 2)
    {
        for (int j = 0; j < i; j++)
        {
            c++;
        }
    }

    return 0;
}
//time complexicity O(n)