#include <iostream>
bool sum_of_odd_nums(long long n, long long k){
    return (n >= k && n % 2 == k % 2);
}

int main (){
    int test_cases{};
    std::cin >> test_cases;
    long long n {}, k {};
    while (test_cases > 0){
        std::cin >> n >> k;
        if (!sum_of_odd_nums(n, k)) std::cout << "NO\n";
        else std::cout << "YES\n";
        --test_cases;
    }
    
    return 0;
}