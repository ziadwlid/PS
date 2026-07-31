#include <iostream>

int main()
{
    std::string str;
    std::cin >> str;
    long length {};
    for (int i = 0; i < str.length(); i++){
        length++;
    }
    std::cout << length;

    return 0;
}