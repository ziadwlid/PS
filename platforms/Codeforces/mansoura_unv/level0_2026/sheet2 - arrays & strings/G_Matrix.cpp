#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    int sum_main_diag{};
    for (int i = 0; i < n; i++)
    {
        sum_main_diag += matrix[i][i];
    }
    int sum_sec_dia{};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum_sec_dia += matrix[i][j];
            }
        }
    }
    std::cout << abs(sum_main_diag - sum_sec_dia) << "\n";
    return 0;
}