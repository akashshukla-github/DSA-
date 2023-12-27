//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {5, 8, 59, 19, 21};
    bool flag = true;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "array is sorted " << endl;
    }
    else
    {
        cout << " arrays is not sorted ";
    }

    return 0;
}
