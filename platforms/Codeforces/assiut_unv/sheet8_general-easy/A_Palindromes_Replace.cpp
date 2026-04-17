#include <iostream>

int main (){
    std::string str; std::cin >> str;
    int i = 0, j = str.length()-1;
    bool impossible = false;
    while (i <= j) {
        if (str[i] == '?' && str[j] == '?') {
            str[i] = str[j] = 'a';       
        } else if (str[i] == '?') {
            str[i] = str[j];
        } else if (str[j] == '?') {
            str[j] = str[i];
        } else if (str[i] != str[j]) {
            impossible = true;             
            break;
        }
        i++; j--;
    }
    if (impossible) std::cout << "-1\n";
    else std::cout << str << "\n";
    return 0;
}