#include <iostream>
long long factorial (long long n){
    if (n == 0) return 1;  
    return n * factorial(n-1);
}
int main (){
    long long n {0};
    std::cin >> n;
    std::cout << factorial(n);
    return 0;
}