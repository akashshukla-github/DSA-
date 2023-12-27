//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int max = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max<<endl;
    int smax = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    cout << smax;
    return 0;
}
