#include <iostream>
long long fibonacci(int num) {
    if (num == 1) return 0;
    if (num == 2) return 1;
    long long a = 0, b = 1;
    for (int i = 3; i <= num; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}
bool is_prime(long long num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int test {0}; std::cin >> test;
    int num {0};
    while (test--){
        std::cin >> num;
        std::cout << (is_prime(fibonacci(num)) ? "prime\n" : "not prime\n");
    }
    return 0;
}