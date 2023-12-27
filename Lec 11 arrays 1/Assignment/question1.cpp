//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int prod = 1;
    for (int i = 0; i < 6; i++)
    {
        prod = prod * arr[i];
    }
    cout << prod;

    return 0;
}
