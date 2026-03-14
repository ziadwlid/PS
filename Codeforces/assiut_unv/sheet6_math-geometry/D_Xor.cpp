#include <iostream>

long long x_or (long long a, long long b, long long q){
    int rec = q % 3;
    if (rec == 1){
        return a;
    }
    else if (rec == 2){
        return b;
    }
    else {
        return (a ^ b); 
    }
}

int main (){
    long long a{0}, b{0}, q{0};
    std::cin >> a >> b >> q;
    std::cout << x_or(a,b,q) << "\n";
    return 0;
}