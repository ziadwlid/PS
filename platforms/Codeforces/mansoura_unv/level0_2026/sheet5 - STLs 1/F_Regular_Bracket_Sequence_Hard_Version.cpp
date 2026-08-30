#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>
#include <stack>
struct Check {
    std::pair<char, char> bracket{'(', ')'};
    std::pair<char, char> square_bracket{'[', ']'};
    std::pair<char, char> braces{'{', '}'};
    std::pair<char, char> bigger_smaller{'<', '>'};
};

int main(){
    std::string str;
    std::stack <char> st;
    std::cin >> str;
    int len = str.length();
    
    Check ch;
    for (int i = 0; i < len; i++){
        if (str[i] == ch.bracket.first ||
            str[i] == ch.square_bracket.first ||
            str[i] == ch.braces.first ||
            str[i] == ch.bigger_smaller.first) {

            st.push(str[i]);
        }
        else {
            if (st.empty()){
                std::cout << "No\n";
                return 0;
            }
            char open = st.top();
            st.pop();
            if ((open == ch.bracket.first && str[i] != ch.bracket.second) ||
                (open == ch.square_bracket.first && str[i] != ch.square_bracket.second) ||
                (open == ch.braces.first && str[i] != ch.braces.second) ||
                (open == ch.bigger_smaller.first && str[i] != ch.bigger_smaller.second)) {

                std::cout << "No\n";
                return 0;
            }
        }
    }if (st.empty())
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
    
    return 0;
}