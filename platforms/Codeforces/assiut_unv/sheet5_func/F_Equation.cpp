#include <iostream>

void equation(int a, int b){
    long long int sum {0};
    long long power = (long long) a * a;
    for (int n = 2; n <= b; n += 2){
        sum += power;
        power *= (long long)a * a;       
    }
    std::cout << sum << "\n";
}

int main (){
    int a{0}, b{0};
    std::cin >> a >> b;
    equation(a, b);
    return 0;
}