#include <iostream>

int digit_sum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long x;
        std::cin >> x;
        int count = 0;
        for (long long y = x + 1; y <= x + 130; y++) {
            if (y - digit_sum(y) == x) count++;
        }
        std::cout << count << "\n";
    }
    return 0;
}