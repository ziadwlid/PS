#include <iostream>

int main()
{
    int x_r, y_r;
    std::cin >> x_r >> y_r;
    int x_w, y_w;
    std::cin >> x_w >> y_w;
    int dist_r = x_r * x_r + y_r * y_r;
    int dist_w = x_w * x_w + y_w * y_w;

    if (dist_r == dist_w)
        std::cout << "Empate\n";
    else if (dist_r < dist_w)
        std::cout << "Russo\n";
    else
        std::cout << "Wil\n";

    return 0;
}