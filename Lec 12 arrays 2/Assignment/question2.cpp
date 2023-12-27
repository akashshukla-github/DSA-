//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {4, 5, 7, 9, 2};
    int max1, max2, max3;
    max1 = max2 = max3 = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            ;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i]>max3)
        {
            max3 = arr[i];
        }
    }
    cout << "three largest values in the array : " << max1 << " " << max2 << " " << max3 << endl;

    return 0;
}
