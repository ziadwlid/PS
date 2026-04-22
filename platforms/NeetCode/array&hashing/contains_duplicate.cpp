/*
Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.
*/

#include<vector>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int shown{0};
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums.size(); j++){
                if (i != j){
                    if (nums[i] == nums[j]) return true;
                }
            }
        }
        return false;
    }
};