/*
You are given an integer array nums of length n. Create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

*/

#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans;
        int idx{0};
        for (int i = 0; i < 2 * nums.size(); i++)
        {
            if (idx == nums.size())
                idx = 0;
            int input = nums[idx];
            ans.push_back(input);
            idx++;
        }
        return ans;
    }
};