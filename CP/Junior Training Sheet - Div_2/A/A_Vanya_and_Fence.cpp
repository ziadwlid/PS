#include <iostream>

int main(){
    long long n{}, h{};
    std::cin >> n >> h;
    long long ans{0}, input{0};
    while (n--)
    {
        std::cin >> input;
        if (input <= h) ans+= 1;
        else ans += 2;
    }
    std::cout << ans << "\n";
    return 0;
}