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
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    std::swap(arr[minIndex], arr[maxIndex]);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}