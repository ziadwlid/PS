#include <iostream>
void love_rcrsv (int n){
    if (n == 0) return;
    std::cout << "I love Recursion" << "\n";
    love_rcrsv (--n);
}

int main (){
    int n {0};
    std::cin >> n;
    love_rcrsv(n);
    return 0;
}