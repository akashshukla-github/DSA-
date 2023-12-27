//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int min = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << min<<endl;


return 0;
}
