#include <iostream>

int main (){
    int x {}, y {}, z {};
    std::cin >> x >> y >> z;
    if (x > y) std::swap (x, y);
    if (x > z) std::swap (x, z);
    if (y > z) std::swap (y, z);

    std::cout << x << " " << y << " " << z << "\n";
    return 0;
}