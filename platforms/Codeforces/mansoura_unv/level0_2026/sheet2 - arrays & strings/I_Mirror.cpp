#include <iostream>
#include <algorithm>
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    /////////////////////////////////////
    std::sort(arr, arr + n);
    
    for (int i = 0; i < n/2; i++){
        std::cout << arr[i] << " ";
    }
    for (int i = n/2 - 1; i >= 0; i--){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    ////////////////////////////////////
    for (int i = n - 1; i >= n/2; i--){
        std::cout << arr[i] << " ";
    }
    for (int i = n/2; i < n; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}