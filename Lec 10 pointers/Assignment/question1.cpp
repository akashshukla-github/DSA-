//          JAI SHREE RAM          //

#include <iostream>

using namespace std;
int product(int* a,int *b){
    return (*a)*(*b);
}
int main() {
    int x=4;
    int y=8;
    cout<<product(&x,&y);


return 0;
}
