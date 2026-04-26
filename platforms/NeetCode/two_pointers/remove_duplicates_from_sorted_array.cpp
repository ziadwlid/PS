/*
Remove Duplicates From Sorted Array
Easy Topics Company Tags

You are given an integer array nums sorted in non-decreasing order. Your task is to remove duplicates from nums in-place so that each element appears only once.

After removing the duplicates, return the number of unique elements, denoted as k, such that the first k elements of nums contain the unique elements.

Note:

    The order of the unique elements should remain the same as in the original array.
    It is not necessary to consider elements beyond the first k positions of the array.
    To be accepted, the first k elements of nums must contain all the unique elements.

Return k as the final result.

Example 1:

Input: nums = [1,1,2,3,4]

Output: [1,2,3,4]
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int s {0};
        
        for (int f = 1; f < nums.size(); f++){
            if (nums[s] != nums[f]){
                s++;
                nums[s] = nums[f];
            }
        }
        return s+1;
    }
};