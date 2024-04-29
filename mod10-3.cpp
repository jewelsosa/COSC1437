#include <iostream>
using namespace std;

//binary function 
int binarySearch(int arr[], int right, int left, int target)
{
    if(right >= left)
    {
        int mid = left + (right - left) /2;
    //if element is on the middle directly
        if(arr[mid] == target)
        return mid;
    //if element is less than middle, then it is located in left subarray
        if(arr[mid] > target)
        return binarySearch(arr, left, mid - 1, target);
    //else element is greater than middle, the element is located in the right subarray
        return binarySearch(arr, mid + 1, right, target);
    }
// return if element isnt in array
    return -1;
}

int main()
{
    //setting array
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 14;
    int result = binarySearch(arr, 0, n - 1, target);
    if(result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element is present at the index " << result << endl;

    return 0;
}