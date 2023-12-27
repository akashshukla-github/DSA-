//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr stotes the address of first element of array
    // int *ptr = &arr; gives error
    // int *ptr=&arr[0]; is correct
    // int *ptr=arr[0]; gives error
    cout << ptr << endl; // 0x61fef8
    cout << &arr[0];     // 0x61fef8
    cout << endl;
    //*ptr=8 = ptr[0]=8
    // printing array using pointer
    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to first element

    *ptr = 8;

    ptr++; // ptr is pointing to second element
    
    *ptr = 9;
    
    ptr--; // ptr is pointing to first element
    
    cout << endl;
    
    for (int i = 0; i <= 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    
    ptr = arr; // ptr is pointing to first element

    return 0;
}
