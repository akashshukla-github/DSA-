//          JAI SHREE RAM          //

#include <iostream>

using namespace std;

void star_triangle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    star_triangle(3);
    star_triangle(4);
    star_triangle(5);

    return 0;
}
