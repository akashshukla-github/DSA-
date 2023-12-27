//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    cout << "difference between even and odd digits is " << even - odd << endl;

    return 0;
}
