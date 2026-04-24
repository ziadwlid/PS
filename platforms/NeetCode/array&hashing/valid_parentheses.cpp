#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    char get_open_match(char ch)
    {
        if (ch == ')') return '(';
        if (ch == ']') return '[';
        return '{';
    }

    bool isValid(string s)
    {
        stack<char> stk;

        for (int i = 0; i < s.length(); ++i)
        {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[')
            {
                stk.push(ch);
            }
            else
            {
                if (stk.empty() || stk.top() != get_open_match(ch))
                    return false;

                stk.pop(); 
            }
        }

        return stk.empty(); 
    }
};