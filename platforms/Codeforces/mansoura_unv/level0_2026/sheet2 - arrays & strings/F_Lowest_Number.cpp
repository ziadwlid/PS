#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int mn = arr[0], index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            index = i;
        }
    }
    std::cout << mn << " " << index+1 << "\n";
    return 0;
}