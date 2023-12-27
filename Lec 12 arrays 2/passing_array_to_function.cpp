//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
void display(int a[])// address of arrays is stored in a
{
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << endl;
    }
}
void change(int b[])
{
    b[0] = 100;
}
int main()
{
    int arr[] = {1, 4, 2, 7, 4};
    display(arr);
    change(arr);
    display(arr);
    return 0;

    // a,b,arr are the same array
    // meaning arrays are passed as refernce and not by value
}
