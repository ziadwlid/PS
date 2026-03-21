#include <iostream>
long long suffix_sum (long long arr[], long long idx, long long suffix){
    if (suffix == 0) return 0;
    if (suffix > 0){
        return arr[idx-1] + suffix_sum(arr, idx-1, suffix-1);
    }
}
int main (){
    long long n {0}, m {0}; std::cin >> n >> m;
    long long arr [n];
    for (long long i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << suffix_sum (arr, n, m);
    return 0;
}