#include <iostream>
#include <algorithm>
struct point
{
    int x, y;
};
bool cmp (point a, point b){
    return a.y > b.y;
}
int main()
{
    int n {};
    std::cin >> n;
    point pt[n];
    for (int i = 0; i < n; i++){
        std::cin >> pt[i].x >> pt[i].y;
    }

    std::sort(pt, pt+n, cmp);
    for (int i = 0; i < n; i++, cmp){
        std::cout << pt[i].x << " " << pt[i].y << "\n";
    }

    return 0;
}