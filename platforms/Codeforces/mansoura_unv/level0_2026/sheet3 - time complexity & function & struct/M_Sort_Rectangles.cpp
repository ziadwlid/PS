#include <iostream>
#include <algorithm>
#include <cmath>

#define int long long

struct pr {
    int index;
    int area;
};

bool cmp(pr a, pr b) {
    return a.area < b.area;
}

signed main() {
    int rec_nums{};
    std::cin >> rec_nums;

    pr rec[rec_nums];

    for (int i = 0; i < rec_nums; i++) {
        int x1, y1;
        std::cin >> x1 >> y1;

        int x2, y2;
        std::cin >> x2 >> y2;

        int x3, y3;
        std::cin >> x3 >> y3;

        int x4, y4;
        std::cin >> x4 >> y4;

        int width = abs(x1 - x2);
        int height = abs(y2 - y3);

        int area = width * height;

        rec[i].index = i + 1;
        rec[i].area = area;
    }

    std::sort(rec, rec + rec_nums, cmp);

    for (int i = 0; i < rec_nums; i++) {
        std::cout << rec[i].index << " " << rec[i].area << '\n';
    }

    return 0;
}