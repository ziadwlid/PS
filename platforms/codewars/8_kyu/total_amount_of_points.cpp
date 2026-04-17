#include <iostream>
#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
    int total {0};
    for (const std::string & games : games){
        int x = games[0] - '0';
        int y = games[2] - '0';
        if (x > y) total += 3;
        else if (x == y) total += 1;
        
    }
    return total;
}

int main (){
    return 0;
}