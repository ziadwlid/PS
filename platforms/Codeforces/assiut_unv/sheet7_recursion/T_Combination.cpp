#include <iostream>
long long combination(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    return combination(n-1, r-1) + combination(n-1, r);
}
int main() {
    long long n {0}, r {0};
    std::cin >> n >> r;
    std::cout << combination(n, r) << "\n";
    return 0;
}