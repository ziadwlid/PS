#include <iostream>

void new_array (int n){
    int arr_C[n*2];
    int arr_A [n];
    for (int i = 0; i < n; i++){
        std::cin >> arr_A[i];
    }
    int arr_B [n];
    for (int i = 0; i < n; i++){
        std::cin >> arr_B[i];
    }
    for (int i = 0; i < n*2; i++){
        arr_C[i] = arr_B[i];
    }
    for (int i = 0; i < n; i++){
        arr_C[i+n] = arr_A[i];
    }
    for (int i = 0; i < n*2; i++){
        std::cout << arr_C[i] << " ";
    }
    std::cout << "\n";
}

int main (){
    int n {0};
    std::cin >> n;
    new_array(n);
    return 0;
}