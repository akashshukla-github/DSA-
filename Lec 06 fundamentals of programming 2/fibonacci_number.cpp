//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main()
{
    // 1 1 2 3 5 8 13 21 34 55 89 .........
    int a = 1, b = 1, sum = 0;
    int n;
    cout << "enter the value of n  : ";
    cin >> n;
    // for(int i=1;i<=n-2;i++){
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    // }
    // cout<<"nth fibonacci sequence is "<<sum;
    // above code gives 0 when n is 1 or 2
    // fixed code
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << "nth fibonacci sequence is " << b;

    return 0;
}
