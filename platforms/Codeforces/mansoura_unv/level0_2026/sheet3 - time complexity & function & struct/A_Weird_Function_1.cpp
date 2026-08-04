#include <iostream>

int f (int x){
    return 2 * x + 3;
}

int main (){
    int x{}; 
    std::cin >>x;

    std::cout << f(f(f(x))) + 2 * f(x * f(x));
    
    return 0;
}