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
    int x;
    cout << "enter the element : ";
    cin >> x;
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << "number of elements greater than given element : " << count << endl;

    return 0;
}
