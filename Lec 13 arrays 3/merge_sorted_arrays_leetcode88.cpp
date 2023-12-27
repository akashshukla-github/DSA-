//          JAI SHREE RAM          //

#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    vector<int> v(n + m);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <= m - 1 && j <= n - 1)
    {
        if (nums1[i] < nums2[j])
        {
            v[k] = nums1[i];
            i++;
            k++;
        }
        else
        {
            v[k] = nums2[j];
            j++;
            k++;
        }
    }
    if (i == m)
    {
        while (j <= n - 1)
        {
            v[k] = nums2[j];
            k++;
            j++;
        }
    }
    if (j == m)
    {
        while (i <= m - 1)
        {
            v[k] = nums1[i];
            k++;
            i++;
        }
    }
    return v;
}
int main()
{
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(52);
    arr2.push_back(124);
    vector<int> v = merge(arr1, arr2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }

    return 0;
}
