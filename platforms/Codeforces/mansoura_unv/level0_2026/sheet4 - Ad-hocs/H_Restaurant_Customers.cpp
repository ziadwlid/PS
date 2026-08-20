#include <iostream>
#include <algorithm>

int main()
{
    int n; 
    std::cin >> n;
    int freq [1000001] = {0};
    while (n--){
        int a, b;
        std::cin >> a >>b;
        freq[a]++;
        freq[b+1]--;
    }
    for (int i = 1; i <= 1000001; i++){
            freq[i] += freq[i-1];
        }
    std::cout << *std::max_element(freq, freq + 1000001) << "\n";
    return 0;
}