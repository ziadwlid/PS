#include <iostream>
void base_converssion (long long n){
    if (n == 0) return;
    base_converssion(n / 2);
    std::cout << n % 2;
}
int main(){
    int test_case {0}; std::cin >> test_case;
    long long n {0};
    while (test_case--){
        std::cin >> n;
        base_converssion (n);
        std::cout << "\n";
    }
    return 0;
}