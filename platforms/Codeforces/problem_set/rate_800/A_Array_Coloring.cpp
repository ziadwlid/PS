#include <iostream>
#include <vector>
int main() {
    int t {0};
    std::cin >> t;
    while (t--) {
        int length {0};
        std::cin >> length;
        std::vector<int> arr(length);
        for (auto &i : arr) std::cin >> i;
        int count = 0;
        for (int i = 0; i < length; i++) {
            count += (arr[i] % 2 != (i+1) % 2);
        }
        std::cout << (count == 0 || count == length ? "YES" : "NO") << "\n";
    }
    return 0;
}