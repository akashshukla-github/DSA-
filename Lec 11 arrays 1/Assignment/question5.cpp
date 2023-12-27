//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    cout << "enter size of the array : ";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << " element : ";
        cin >> arr[i];
    }
    int x = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << x << endl;
    }
    return 0;
}
