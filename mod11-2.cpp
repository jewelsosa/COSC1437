#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& nums, int start, int end)
{
    //base; if start index is greater than or equal to, stop recursive function
    if(start >= end)
        return;

    //swap elements at start and end 
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;

    reverseVector(nums, start + 1, end - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Original Vector - ";
    for (int num : nums)
    {
        cout << " " << num;
    }
    cout << endl;

    reverseVector(nums, 0, nums.size() - 1);

    cout << "Reversed vector - ";
    for(int num : nums)
    {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}