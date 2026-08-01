#include <iostream>
int main()
{
    int n, m;
    std::cin >> n >> m;

    int arr[n];
    int frequency[100001];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        std::cout << frequency[i] << "\n";
    }
    return 0;
}