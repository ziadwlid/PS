#include <iostream>
#include <cstring>

int main()
{
    int n {};
    std::cin >> n;
    int arr[n];
    int prefixsum[n+1] = {0};
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        prefixsum[i + 1] = prefixsum[i] + arr[i];
    }
    
    int testCases {0};
    std::cin >> testCases;
    while (testCases--){
        int l, r;
        std::cin >> l >> r;
        std::cout << prefixsum[r] - prefixsum[l-1] << "\n";
    }
    return 0;
}