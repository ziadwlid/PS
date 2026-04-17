#include <iostream>
#include <string>

int main (){
    std::string str; std::cin >> str;
    int step {0};
    char current = 'a';
    for (int i = 0; i < str.length(); i++){
        int diff = abs (current - str[i]);
        step += std::min(diff, 26 - diff);
        current = str[i];
    }
    std::cout << step;
    return 0;
}