#include <iostream>
#include <cmath>

void equation(int a, int b){
    int initial_val = pow(a, 0) - 1;
    int sum {0};
    int n = 2;
    while (true){
        sum +=pow(a, n);
        n += 2;
        if (n > b) break;
    }

    std::cout << initial_val + sum<< "\n";
}

int main (){
    int a{0}, b{0};
    std::cin >> a >> b;
    equation(a, b);
    return 0;
}