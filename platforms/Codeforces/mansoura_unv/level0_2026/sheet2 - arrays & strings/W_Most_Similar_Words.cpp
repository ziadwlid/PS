#include <iostream>

int main()
{
    int testCases{};
    std::cin >> testCases;
    while (testCases--)
    {
        int string_numbers, n;
        std::cin >> string_numbers >> n;
        std::string str1[string_numbers];
        for (int i = 0; i < string_numbers; i++)
        {
            std::cin >> str1[i];
        }
        int ans = 1e9;
        for (int i = 0; i < string_numbers; i++)
        {
            for (int j = i+1; j < string_numbers; j++){
                int sum {};
                for (int k = 0; k < n; k++){
                    sum += abs(str1[i][k] - str1[j][k]);
                }
                ans = std::min (ans, sum);
            }
        }
        std::cout << ans << "\n";
    }
    return 0;
}