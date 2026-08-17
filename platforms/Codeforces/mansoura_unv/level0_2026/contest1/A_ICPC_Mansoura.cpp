#include <iostream>

int main(){
    int n {};
    std::cin >> n;
    if (n % 2 == 0) 
        std::cout << "Ahmed welcomes you to ICPC Mansoura Community\n";
    else 
        std::cout << "Amr welcomes you to ICPC Mansoura Community\n";
    return 0;
}