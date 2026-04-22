#include <iostream>
#include <iomanip>

int main (){
    double a {};
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(4) << "A=" <<  (a*a*3.14159) << "\n";
    return 0;
}