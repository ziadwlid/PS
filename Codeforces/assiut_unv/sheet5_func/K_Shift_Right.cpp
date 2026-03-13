#include <iostream>

void right_shift(int n, int x)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    while(x--){
    int lastidx = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastidx;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int n{0}, x{0};
    std::cin >> n >> x;
    right_shift(n, x);
    return 0;
}