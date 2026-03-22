#include <iostream>
#include <iomanip>
long double array_arrange (long long arr[], int idx){
    if (idx == 0) return 0;
    return arr[idx-1]+array_arrange(arr, idx-1);
}
int main (){
    int length {0}; std::cin >> length;
    long long arr[length];
    for (int i = 0; i <length; i++){
        std::cin >> arr[i];
    }
    std::cout<< std::fixed << std::setprecision(6) <<array_arrange(arr, length) /(long double) length;
    return 0;
}