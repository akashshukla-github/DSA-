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
    cout <<"maximum element in array is : "<< max;

    return 0;
}
