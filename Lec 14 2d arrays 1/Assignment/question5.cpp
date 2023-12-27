//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << "Enter the number of columns : ";
    cin >> m;
    int a[n][m];
    cout << "Enter the matrix element : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int idx=-1;
    int max_sum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        if(sum>max_sum) max_sum=sum;
        idx=i;

    }
    cout<<idx;


return 0;
}
