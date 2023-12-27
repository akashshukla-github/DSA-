//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter size of array ";
    cin >> n;

    int arr[n];
    cout << "enter elements of array ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int smax = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    cout << "largest element in array is : " << max << endl;
    cout << "second largest element in array is : " << smax << endl;

    return 0;
}
