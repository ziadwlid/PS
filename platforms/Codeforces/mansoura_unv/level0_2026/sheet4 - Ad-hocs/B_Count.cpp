#include <iostream>

int main()
{
    int n, q;
    std::cin >> n >> q;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        std::cin >> arr[i];
    }
    while (q--)
    {
        int l, r, x;
        std::cin >> l >> r >> x;
        int count = 0;
        for (int i = l; i <= r; i++)
        {
            if (arr[i] == x)
                count++;
        }

        std::cout << count << '\n';
    }
    return 0;
}