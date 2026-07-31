#include <iostream>
int main()
{
    int n, m, x;
    std::cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    std::cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
            if (matrix[i][j] == x) {
                std::cout << "YES\n";
                return 0;
            }
        }
    }
    std::cout << "NO\n";

    return 0;
}