#include <iostream>
#include <string>
    int main() {
    std::string stone, instruction;
    std::cin >> stone >> instruction;
    
    int count {0};
    for (int i = 0, j = 0; j < instruction.length(); j++) {
        if (stone[i] == instruction[j]) i++, count++;
    }
    std::cout << count + 1;
    return 0;
}