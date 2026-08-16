#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>

int main()
{
    int n, m;
    const int N = 10e5;
    std::cin >> n >> m;
    int arr[n], freq[N] = {0};
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        std::cout << freq[i] << '\n';
    }
    return 0;
}