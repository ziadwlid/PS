#include <iostream>

int main()
{
    std::string n;
    std::cin >> n;
    int sum {};
    for (int i = 0; i < n.length(); i++){
        sum += n[i] - '0';
    }
        if (sum % 3 == 0) std::cout << "YES\n";
        else std::cout << "NO\n";
    
    return 0;
}