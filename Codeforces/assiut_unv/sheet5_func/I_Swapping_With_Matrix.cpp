#include <iostream>
#include <algorithm>
void swaping_with_matrix(int n, int x, int y)
{
    x--;
    y--;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::swap(matrix[x][i], matrix[y][i]);
    }
    for (int i = 0; i < n; i++){
        std::swap(matrix[i][x], matrix [i][y]);
    }
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << matrix[i][j] << " ";
            }
                std::cout << "\n";
        }
}

int main()
{
    int n{0}, x{0}, y{0};
    std::cin >> n >> x >> y;
    swaping_with_matrix(n, x, y);
    return 0;
}