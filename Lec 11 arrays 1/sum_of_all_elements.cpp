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
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
    }
    cout << "sum of all elements in array is : " << sum;

    return 0;
}
