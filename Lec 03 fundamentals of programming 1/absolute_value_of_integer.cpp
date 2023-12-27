//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter a integer : ";
    cin >> n;
    // if (n > 0)
    // {
    //     cout << cout<<"absolute value of given integer is"<<" "<<n;
    // }
    // else
    // {
    //     cout << "absolute value of given integer is" << " " << -n;
    // }
    
    
    
    // ALTERNATE WAY :-
    
    if (n <= 0)
    {
        n = -n;
    }
    cout << "absolute value of given integer is"<< " " << n;

    return 0;
}
