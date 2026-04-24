#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int max_operation(vector<int> &i)
    {
        return *max_element(i.begin(), i.end());
    }

    int max_prof(vector<int> &arr_max)
    {
        return *max_element(arr_max.begin(), arr_max.end());
    }

    int maxProfit(vector<int> &prices)
    {
        int len = prices.size();
        vector<int> arr_max(len);
        vector<int> max_arr_prof(len);

        for (int i = 0; i < len; i++)
        {
            int best = 0;
            for (int j = i + 1; j < len; j++)
            {
                if (prices[j] > prices[i])
                {
                    int diff = prices[j] - prices[i];
                    best = max(best, diff);
                }
            }

            arr_max[i] = best;
            max_arr_prof[i] = best;
        }

        return max_prof(arr_max);
    }
};