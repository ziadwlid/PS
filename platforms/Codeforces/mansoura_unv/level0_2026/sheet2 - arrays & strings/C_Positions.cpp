#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        if (arr[i] <= 10){
            std::cout << "A[" << i << "] = " << arr[i] << "\n";
        }
    }
    return 0;
}