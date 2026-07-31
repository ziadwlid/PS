#include <iostream>

int main()
{
    int n, x;
    std::cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        if (arr[i] == x) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << "Not Found\n";
    return 0;
}