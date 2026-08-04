#include <iostream>

int main()
{
    int testCases {};
    std::cin >> testCases;
    while (testCases--){
        std::string str;
        std::cin >> str;
        int c_a {}, c_b {};
        for (int i = 0 ;i < str.length(); i++){
            if (str[i] == 'A') ++c_a;
            else ++c_b;
        }
        std::cout << (c_a > c_b ? 'A' : 'B') << "\n";
    }
    return 0;
}