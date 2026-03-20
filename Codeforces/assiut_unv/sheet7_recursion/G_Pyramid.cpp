#include <iostream>
void print_space (int space){
    if (space == 0) return;
    std::cout << " ";
    print_space(space - 1);
}
void print_astetisk (int asterisk){
    if (asterisk == 0) return;
    std::cout << "* ";
    print_astetisk(asterisk - 1);
}
void pyramid(int n, int nn){
    if (n == 0) return;
    print_space(n-1);
    print_astetisk(nn - n + 1);
    std::cout << "\n";
    pyramid (n - 1, nn);
}
int main (){
    int n {0};
    std::cin >> n;
    pyramid(n, n);
    return 0;
}