#include <iostream>
#include <string>

int main()
{
    bool flag = true;
    int n{};
    std::cin >> n;
    std::string a, b, c, d;
    std::cin >> a >> b >> c >> d;

    while (--n)
    {
        std::string x, y, z, w;
        std::cin >> x >> y >> z >> w;

        if (x != a || y != b || z != c || w != d)
        {
            flag = false;
        }
    }
    std::cout << (flag ? "Empedocles was right\n" : "you were right\n");
    return 0;
}