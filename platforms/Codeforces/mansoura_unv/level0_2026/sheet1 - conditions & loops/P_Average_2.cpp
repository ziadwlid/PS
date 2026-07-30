#include <iostream>
#include <iomanip>
int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    double average = (a*2 + b*3 + c*5) / 10.0;
    std::cout<< std::fixed << std::setprecision (1) <<  "MEDIA = " << average << "\n";
    return 0;
}