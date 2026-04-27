/*
Baseball Game
Easy Topics Company Tags

You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

Given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

    An integer x: Record a new score of x.

    '+': Record a new score that is the sum of the previous two scores.

    'D': Record a new score that is the double of the previous score.

    'C': Invalidate the previous score, removing it from the record.

Return the sum of all the scores on the record after applying all the operations.

Note: The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.

Example 1:

Input: ops = ["1","2","+","C","5","D"]

Output: 18

Explanation:

    "1" - Add 1 to the record, record = [1].
    "2" - Add 2 to the record, record = [1, 2].
    "+" - Add 1 + 2 = 3 to the record, record = [1, 2, 3].
    "C" - Invalidate and remove the previous score, record = [1, 2].
    "5" - Add 5 to the record, record = [1, 2, 5].
    "D" - Add 2 * 5 = 10 to the record, record = [1, 2, 5, 10].
    The total sum is 1 + 2 + 5 + 10 = 18.

*/

#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        if (operations.empty())
            return -1;
        stack<int> record;
        for (int i = 0; i < operations.size(); i++)
        {
            char ch = operations[i][0];
            if (isdigit(ch))
            {
                int num = stoi(operations[i]);
                record.push(num);
            }
            else if (ch == '+')
            {
                int b = record.top();
                record.pop();
                int a = record.top();
                record.push(b);
                record.push(a + b);
            }
            else if (ch == 'D')
            {
                int a = record.top();
                int res = a * 2;
                record.push(res);
            }
            else if (ch == 'C')
            {
                record.pop();
            }
            else {
                record.push(stoi(operations[i]));
            }
        }
        int final = 0;
        while (!record.empty())
        {
            int a = record.top();
            final += record.top();
            record.pop();
        }
        return final;
    }
};