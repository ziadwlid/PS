#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int n{}, candies{};
    std::cin >> n >> candies;
    int arr[102] = {0};
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        arr[i] = std::ceil(arr[i]  / (double)candies);
    }    
    int res = n;
    int min = INT_MIN;
    for (int i = 0; i < n; i++){
        if (min <= arr[i]) min = arr[i], res = i + 1;

    }
    std::cout << res;
    return 0;
}