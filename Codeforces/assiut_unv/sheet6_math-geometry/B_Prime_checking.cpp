#include <iostream>
bool prime (int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        {
            if (n % i == 0) return false;
        }
    return true;
}

int main (){
    int n {0};
    std::cin >> n;
    prime (n) ? std::cout << "YES\n" : std::cout << "NO\n";
    return 0;
}