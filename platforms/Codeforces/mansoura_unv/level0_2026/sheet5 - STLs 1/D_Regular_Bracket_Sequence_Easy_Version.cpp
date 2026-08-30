#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>
#include <stack>
int main(){
    std::string str;
    std::stack <char> st;
    std::cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++){
        if (str[i] == '('){
            st.push(str[i]);
        }
        else if (str[i] == ')'){
            if (st.empty())
            {
                std::cout << "No\n";
                return 0;
            }
            st.pop();
        }
    }
    if (!st.empty()) std::cout << "No\n";
    else std::cout << "Yes\n";
    return 0;
}