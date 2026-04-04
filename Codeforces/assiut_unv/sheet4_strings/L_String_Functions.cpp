#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int n {0}, q {0};
    int scope1 {0},scope2 {0};
    int pos{0};
    char c;
    std::string str;
    std::cin >> n >> q;
    std::cin >> str;
    while (q--){
        std::string query;
        std::cin >> query;
        if (query == "pop_back") {
            if (!str.empty()) str.pop_back(); // fix empty string crash
        }
        else if (query == "front") {
            if (!str.empty()) std::cout << str.front() << "\n"; // fix empty string crash
        }
        else if (query == "back"){
            if (!str.empty()) std::cout << str.back() << "\n";
        }
        else if (query == "sort") {
            std::cin >> scope1 >> scope2;
            // clamp indices to valid range
            int l = std::max(1, std::min(scope1, scope2));
            int r = std::min((int)str.size(), std::max(scope1, scope2));
            std::sort(str.begin() + l - 1, str.begin() + r);
        }
        else if (query == "reverse"){
            std::cin >> scope1 >> scope2;
            int l = std::max(1, std::min(scope1, scope2));
            int r = std::min((int)str.size(), std::max(scope1, scope2));
            std::reverse(str.begin() + l - 1, str.begin() + r);
        }
        else if (query == "print"){
            std::cin >> pos;
            if (pos >= 1 && pos <= (int)str.size())
                std::cout << str[pos-1] << "\n"; // fix out-of-range
        }
        else if (query == "substr"){
            std::cin >> scope1 >> scope2;
            int l = std::max(1, std::min(scope1, scope2));
            int r = std::min((int)str.size(), std::max(scope1, scope2));
            for (int i = l - 1; i < r; i++){
                std::cout << str[i];
            }
            std::cout << "\n";
        }
        else if (query == "push_back"){
            std::cin >> c;
            str.push_back(c);
        }
    }
    return 0;
}