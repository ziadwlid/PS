#include <iostream>
    int length {0}; 
void print_even_indices (long long arr[]){
    if (length == 0) return;
    if ((length-1) % 2 == 0) std::cout << arr[length-1] << " ";
    --length;
    print_even_indices(arr);
}
int main(){
    std::cin >> length;
    long long arr [length];
    for (int i = 0; i < length; i++){
        std::cin >>arr[i];
    }
    print_even_indices(arr);
    return 0;
}