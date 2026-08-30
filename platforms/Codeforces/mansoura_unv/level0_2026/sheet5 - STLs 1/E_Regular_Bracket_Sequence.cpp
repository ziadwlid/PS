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
    int cnt {};
    for (int i = 0; i < len; i++){
        if (str[i] == '('){
            st.push(str[i]);
        }
        else {
            if (st.empty()){
                cnt++;
                continue;
            }
            st.pop();
        }
    }
    std::cout << str.length() - (cnt + st.size()) << "\n";
    return 0;
}