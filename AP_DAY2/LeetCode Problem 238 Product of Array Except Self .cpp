// LeetCode Problem 238: Product of Array Except Self
// Description:
// Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.
//
// Constraints:
// - 2 <= nums.length <= 10^5
// - -30 <= nums[i] <= 30
// - The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.
// - You must write an algorithm that runs in O(n) time and without using the division operation.
//
// Follow-up:
// Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
//
// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
//
// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1); // Initialize the answer array with 1s

        // Calculate prefix products
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Calculate suffix products and multiply with prefix products
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};
