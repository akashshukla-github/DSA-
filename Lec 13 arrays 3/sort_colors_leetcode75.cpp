//          JAI SHREE RAM          //

#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums)
{
    // one pass algorith(dutch flag algorithm)
    int lo = 0;
    int mid = 0;
    int hi = nums.size() - 1;
    // play with mid only
    // o to lo-1 ->0
    // hi to end ->2
    // lo to mid-1 -> 1
    while (mid <= hi)
    {
        if (nums[mid] == 2)
        {
            int temp = nums[mid];
            nums[mid] = nums[hi];
            nums[hi] = temp;
            hi--;
        }
        else if (nums[mid] == 0)
        {
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            lo++;
            mid++;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
