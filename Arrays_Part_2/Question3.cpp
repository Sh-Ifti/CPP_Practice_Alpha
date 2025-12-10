/*
Given  an  integer  array  nums,  find  a  subarray  that  has  the  largest
product, and return the product. The test cases are generated so that the answer will
fit in a 32-bit integer.
 Note - This Qs might feel difficult as a beginner because it uses DP approach.
  Examples :
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
 Input: intervals =nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/
#include <iostream>
using namespace std;

int largestProduct(int *arr, int n)
{
    int maxTillNow = arr[0];
    int minTillNow = arr[0];

    int ans = maxTillNow;

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int tempMax = maxTillNow;

        maxTillNow = max(curr, max(tempMax * curr, minTillNow * curr));
        minTillNow = min(curr, max(tempMax * curr, minTillNow * curr));

        ans = max(maxTillNow, ans);
    }
    return ans;
}

int main()
{
    int arr1[] = {2, 3, -2, 4};
    int n1 = sizeof(arr1) / sizeof(int);

    cout << "Largest Subarray Product: " << largestProduct(arr1, n1) << endl;

    int arr2[] = {-2, 0, -1};
    int n2 = sizeof(arr2) / sizeof(int);

    cout << "Largest Subarray Product: " << largestProduct(arr2, n2) << endl;

    return 0;
}

// Time Complexity: O(n)
// Largest Subarray Product: 6
// Largest Subarray Product: 0