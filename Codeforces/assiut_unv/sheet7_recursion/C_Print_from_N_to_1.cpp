#include <iostream>
void print_n_to_1 (int n){
    if (n == 0) return;
    std::cout << n;
    if (n != 1) std::cout << " ";
    print_n_to_1 (n - 1);
}
int main (){
    int n {0};
    std::cin >> n;
    print_n_to_1 (n);
    return 0;
}