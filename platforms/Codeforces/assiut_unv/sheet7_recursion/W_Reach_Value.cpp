#include <iostream>
bool can_reach(long long n) {
    if (n == 1) return true;       
    if (n % 10 == 0 && can_reach(n / 10)) return true;
    if (n % 20 == 0 && can_reach(n / 20)) return true;
    return false;                  
}
int main (){
    int test_cases {0}; std::cin >> test_cases;
    long long n;
    while (test_cases--){
        std::cin >> n;
        if (!can_reach(n)) std::cout << "NO\n"; 
        else std::cout << "YES\n";
    }
    return 0;
}