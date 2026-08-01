#include <iostream>
int main()
{
    int n {};
    std::cin >> n;
    if (n == 1){
        std::cout << 0 << "\n";
        return 0;
    }
    else if (n == 2) {
        std::cout << 1 << "\n";
        return 0;
    }
    long long sum {};
    long long first {0}; 
    long long second {1};
    for (int i = 3; i <= n; i++){
        sum = first + second;
        first = second;
        second = sum;
    }
    std::cout << second << "\n";

    /*
    long long fib[n + 1];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
        */
    return 0;
}