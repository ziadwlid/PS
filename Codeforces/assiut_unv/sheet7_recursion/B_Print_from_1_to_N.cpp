#include <iostream>
void print_1_to_n (int n){
    if (n == 0) return;
    print_1_to_n (n - 1);
    std::cout << n << "\n";
}
int main (){
    int n {0};
    std::cin >> n;
    print_1_to_n (n);
    return 0;
}