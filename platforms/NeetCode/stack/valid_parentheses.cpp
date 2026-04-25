/*
You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

    Every open bracket is closed by the same type of close bracket.
    Open brackets are closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.

Return true if s is a valid string, and false otherwise.
*/

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