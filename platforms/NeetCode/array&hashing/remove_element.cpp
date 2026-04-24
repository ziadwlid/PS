/*
You are given an integer array nums and an integer val. Your task is to remove all occurrences of val from nums in-place.

After removing all occurrences of val, return the number of remaining elements, say k, such that the first k elements of nums do not contain val.

Note:

    The order of the elements which are not equal to val does not matter.
    It is not necessary to consider elements beyond the first k positions of the array.
    To be accepted, the first k elements of nums must contain only elements not equal to val.

Return k as the final result.

Example 1:

Input: nums = [1,1,2,3,4], val = 1

Output: [2,3,4]
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int> k;
        int f {0}, s {0};
        for (int i = 0; i < nums.size(); i++){
            if(nums[s] == val)
            {
                f = s + 1;
                for (int i = s; i < nums.size(); i++){
                    if (f >= nums.size()) break;
                    nums[i] = nums[f];
                    ++f;
                }
            }
            else ++s;
        }
        return s;
    }
};