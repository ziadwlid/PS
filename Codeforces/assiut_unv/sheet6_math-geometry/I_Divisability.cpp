#include <iostream>

int main (){
    long long a {0}, b {0}, x {0};
    std::cin >> a >> b >> x;
    long long sum {0};
    for (int i = a; i <= b; i++){
        if (i % x == 0) sum += i;
    }
    std::cout << sum << "\n";
    return 0;
}