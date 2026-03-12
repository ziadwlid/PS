#include <iostream>

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void test_is_prime(int input){
    while(input--){
        int n{0};
        std::cin >> n;
        if (is_prime(n))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
}

int main (){
    int n{0};
    std::cin >> n;
    test_is_prime(n);    
    return 0;
}