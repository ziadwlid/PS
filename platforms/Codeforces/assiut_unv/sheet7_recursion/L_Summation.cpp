#include <iostream>
long long summation (long long arr [], int idx){
    if (idx == 1) return arr[0];
    return arr[idx-1] + summation(arr, idx-1);
}

int main(){
    int length {0}; std::cin >>length;
    long long arr[length];
    for (int i = 0; i < length; i++){
        std::cin >> arr[i];
    }
    std::cout << summation(arr, length);
    return 0;
}