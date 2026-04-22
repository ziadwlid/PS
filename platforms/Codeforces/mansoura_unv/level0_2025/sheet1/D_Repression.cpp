#include <iostream>

int main (){
    int a {}, b {}, c {};
    std::cin >> a >> b >> c;
    if (a+b > b+c && a+b > a+c) std::cout << a+b <<"\n";
    else if (b+c > a+b && b+c > a+c) std::cout << b+c << "\n";
    else std::cout << a+c << "\n";
    return 0;
}