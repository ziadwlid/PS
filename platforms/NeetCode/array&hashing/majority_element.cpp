/*
Majority Element
Easy Topics Company Tags

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times in the array. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [5,5,1,1,1,5,5]

Output: 5
*/

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int majority_elem = nums[0];
        int internal_comp {1};
        for (int i = 1; i < len; i++){
            if (majority_elem == nums[i]){
                ++internal_comp;
            }
            else {
                --internal_comp;
            }
            if (internal_comp == 0){
                majority_elem = nums[i];
                internal_comp = 1;
            }
        }
        return majority_elem;
    }
};