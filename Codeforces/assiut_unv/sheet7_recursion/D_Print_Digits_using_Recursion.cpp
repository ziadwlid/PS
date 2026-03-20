#include <iostream>

void print_digits(long long n ,bool first = true){
    if (n == 0) return;
    long long nn = n % 10;
    n /= 10;
    print_digits(n, false);
    if (!first || n != 0) std::cout << " ";
    std::cout << nn;
}


int main (){
    int test_case {0};
    std::cin >> test_case;
    long long n {0};
    while(test_case--){
        std::cin >> n;
        if (n == 0) std::cout << "0";
        else print_digits(n);
        std::cout << "\n";
    }
    return 0;
}