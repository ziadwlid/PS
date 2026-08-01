#include <iostream>
int main()
{
    int n {};
    std::cin >> n;
    char str[n];
    bool found[26] {false};
    for (int i = 0; i < n; i++){
        std::cin >> str[i];
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        found[str[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++){
        if (found[i] == false) {
            std::cout << "NO\n";
            return 0;
        }
    }
    std::cout << "YES\n";
    
    return 0;
}