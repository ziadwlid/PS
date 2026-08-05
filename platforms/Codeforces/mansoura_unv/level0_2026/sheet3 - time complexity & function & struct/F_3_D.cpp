#include <iostream>
#include <algorithm>
struct star
{
    int x, y , z;
};

int main()
{   
    int n;
    std::cin >> n;
    star str[n];
    for (int i = 0; i < n; i++){
        std::cin >> str[i].x >> str[i].y >> str[i].z;
    }
    for (int i = 0; i < n; i++){
        int cx=0, cy=0, cz=0;
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            if (str[i].x == str[j].x)cx++;
            if (str[i].y == str[j].y)cy++;
            if (str[i].z == str[j].z)cz++;
        }
        std::cout << cx << " " << cy << " " << cz << "\n";
    }
    return 0;
}