#include <iostream>
#include <string>
#include <cctype>
int main()
{
    std::string str;
    std::cin >> str;
    int diff {};
    for (int i = 0, j = str.length() - 1; i < j; i++, j--){
        if (str[i] != str[j]) 
            diff++;
    }
    if (str.size() % 2 == 1 && diff < 1) diff++;
    if (diff == 1) std::cout << "YES\n";
    else std::cout << "NO\n"; 
    return 0;
}