#include <iostream>

int main (){
    long long n{}, m{};
    std::cin >> n >> m;
    int digit1 {}, digit2 {};
    digit1 = n % 10;
    digit2 = m % 10; 
    std::cout << digit1+digit2 << "\n";
    return 0;
}