// LeetCode Problem 1: Two Sum
// Description:
// Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.
//
// Constraints:
// - 2 <= nums.length <= 10^4
// - -10^9 <= nums[i] <= 10^9
// - -10^9 <= target <= 10^9
// - Only one valid answer exists.
//
// Follow-up:
// Can you come up with an algorithm that is less than O(n^2) time complexity?
//
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: nums[0] + nums[1] == 9, so we return [0, 1].
//
// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
//
// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Iterate through each pair of indices
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Check if the sum of the pair equals the target
                if (nums[i] + nums[j] == target) {
                    // Return the indices of the two numbers
                    return {i, j};
                }
            }
        }
        
        // Return an empty vector if no solution is found (should not happen with given constraints)
        return {};
    }
};
