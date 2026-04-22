#include <iostream>

int main (){
    int l1{}, r1{}, l2{}, r2{};
    std::cin >> l1 >> r1 >> l2 >> r2;
    if (l2 > r1 || r2 < l1) 
        std::cout << "-1\n";
    else {
        int left = (l1 > l2 ? l1 : l2);
        int right = (r1 < r2 ? r1 : r2);
        std::cout << left << " " << right << "\n";
    }
    return 0;
}