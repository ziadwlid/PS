#include <iostream>
#include <cmath>
bool powerOfTwo (int n){
    return (ceil(log2(n))) == (floor(log2(n)));
}

int main (){
    int n{0};
    std::cin >> n;
    powerOfTwo(n) ? std::cout << "YES\n" : std::cout << "NO\n";
    return 0;
}