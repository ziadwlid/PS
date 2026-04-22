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