#include <iostream>

int main()
{
    int matrix [5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            std::cin >> matrix[i][j];
        }
    }
    int row {}, col {};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matrix[i][j]  == 1){
                row = i;
                col = j;    
            }
            
        }
    }
    std::cout << abs(row - 2) + abs(col - 2) << "\n";
    return 0;
}