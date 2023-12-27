//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter number of students : ";
    cin>>n;
    int marks[n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        cout << "enter marks of student : " << i<<" ";
        cin >> marks[i];
    }

    // printing output
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
            cout << i << " ";
    }

    return 0;
}
