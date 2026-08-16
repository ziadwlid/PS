#include <iostream>
#include <algorithm>
#include <iomanip>

struct pr
{
    int value, litre;
};

bool cmp(pr a, pr b)
{
    return (a.value / (double)a.litre) >
           (b.value / (double)b.litre);
}

int main()
{
    int n{}, l{};
    std::cin >> n >> l;

    pr arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i].value >> arr[i].litre;
    }

    double sum{};

    std::sort(arr, arr + n, cmp);

    for (int i = 0; i < n && l != 0; i++)
    {

        if (l >= arr[i].litre)
        {
            sum += arr[i].value;
            l -= arr[i].litre;
        }
        else
        {
            sum += (arr[i].value / (double)arr[i].litre) * l;
            l = 0;
        }
    }

    std::cout << std::fixed
              << std::setprecision(6)
              << sum << '\n';

    return 0;
}