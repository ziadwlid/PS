#include <iostream>
#include <algorithm>
long long sum (long long n){
    return (n * (n + 1) / 2);
}
int main (){
    long long a {0}, b {0}, x {0};
    std::cin >> a >> b >> x;
    long long ma {0}, mi {0};
    ma = std::max (a, b);
    mi = std::min (a, b);
    std::cout << sum(ma/x) * x - sum((mi -1) / x) * x;
    return 0;
}