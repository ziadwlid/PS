#include <iostream>
#include <string>

int main()
{
    int k, s;
    std::cin >> k >> s;
    int cnt {};
    int x{}, y{}, z{};
    for (int x = 0; x <= k; x++){
        for (int y = 0; y <= k; y++){
            int z = s - x - y;
            if (z>= 0 && z <= k) ++cnt;
        }
    }
    std::cout << cnt;
    return 0;
}