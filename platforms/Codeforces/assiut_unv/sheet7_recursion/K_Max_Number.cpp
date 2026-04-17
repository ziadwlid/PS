#include <iostream>
#include <algorithm>
long long max_number (long long arr[], int idx){
    if (idx ==  1) return arr[0];
    return std::max(arr[idx - 1], max_number(arr, idx - 1));
}

int main (){
    int length {0}; std::cin >> length;
    long long arr [length];
    for (int i = 0; i < length; i++){
        std::cin >> arr[i];
    }
    std::cout << max_number(arr, length);
    return 0;   
}