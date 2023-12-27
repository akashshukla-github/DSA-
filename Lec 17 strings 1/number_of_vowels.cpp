//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    string str = "akash shukla";
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'i')
        {
            count++;
        }
        i++;
    }
    cout << count;

    return 0;
}
