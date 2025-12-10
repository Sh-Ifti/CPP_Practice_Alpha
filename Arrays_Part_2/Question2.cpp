/*
There is an integer array nums sorted in ascending order (with distinct
values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot
index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ...,
nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7]
might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the
index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity. [link]
Examples :
Input: nums = [4,5,6,7,0,1,2], target = 0 Output:
4
Input: nums = [4,5,6,7,0,1,2], target = 3 Output:
-1
*/

#include <iostream>
using namespace std;

int searchTarget(int *arr, int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    int target1 = 0;
    int target2 = 3;

    int index1 = searchTarget(arr, n, target1);
    cout << target1 << " is at index: " << index1 << endl;

    int index2 = searchTarget(arr, n, target2);
    cout << target2 << " is at index: " << index2 << endl;

    return 0;
}

// 0 is at index: 4
// 3 is at index: -1