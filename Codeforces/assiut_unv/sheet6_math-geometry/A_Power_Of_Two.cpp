#include <iostream>
#include <cmath>

int main (){
    long long  n{0};
    std::cin >> n;
    int logint = log2(n);
    double logdouble = log2 (n);
    if (logint == logdouble) std::cout << "YES\n";
    else std::cout << "NO\n";
    return 0;
}