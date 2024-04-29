#include <iostream>
#include <vector>
using namespace std;

bool findElement(const vector<int>& nums, int target, int index)
{
    //base, if index is larger than vector size, return false
    if(index >= nums.size())
    return false;

    //if target matches element at index, return true
    if(nums[index] == target)
        return true;
        
    return findElement(nums, target, index + 1);
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 5;

    cout << "Original Vector - ";
    
    for(int num : nums)
    {
        cout << " " << num;
    }
    cout << endl;

    if (findElement(nums, target, 0))
        cout << "Target... " << target << " WAS FOUND IN THE VECTOR :D" << endl;
    else
        cout << "Target... " << target << " TWAS NOT FOUND IN THE VECTOR D: " << endl;

    return 0;
}