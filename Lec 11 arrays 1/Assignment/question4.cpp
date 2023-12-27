//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 1, 4, 5, 6};
    int dup = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (dup == arr[i])
        {
            cout << "duplicate elements present " << endl;
            break;
        }
        else
        {
            cout << " duplicate elements not present " << endl;
            break;
        }
    }

    return 0;
}
