#include <iostream>
int main()
{
    int n, q;
    std::cin >> n >> q;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    while (q--){
        int l, r, x;
        std::cin >> l >> r >> x;
        --l, --r;
        int counter {0};
        for (int i = l; i <= r; i++){
            if (arr[i] == x){
                counter++;
            }
        }
        std::cout << counter <<"\n";
    }
    return 0;
}