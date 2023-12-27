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
    cout << "enter the element to be searched : ";
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
            flag = true;
    }
    if (flag == true)
        cout << "element is present" << endl;
    else
        cout << "element is not present " << endl;

    return 0;
}
