#include <iostream>

int main()
{
    int Ra, Ca;
    std::cin >> Ra >> Ca;

    int matrix_a[Ra][Ca];
    for (int i = 0; i < Ra; i++)
        for (int j = 0; j < Ca; j++)
            std::cin >> matrix_a[i][j];

    int Rb, Cb;
    std::cin >> Rb >> Cb;

    int matrix_b[Rb][Cb];
    for (int i = 0; i < Rb; i++)
        for (int j = 0; j < Cb; j++)
            std::cin >> matrix_b[i][j];

    int matrix_result[Ra][Cb];

    for (int i = 0; i < Ra; i++)
        for (int j = 0; j < Cb; j++)
            matrix_result[i][j] = 0;

    for (int i = 0; i < Ra; i++)
        for (int j = 0; j < Cb; j++)
            for (int k = 0; k < Ca; k++)
                matrix_result[i][j] += matrix_a[i][k] * matrix_b[k][j];

    for (int i = 0; i < Ra; i++) {
        for (int j = 0; j < Cb; j++)
            std::cout << matrix_result[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}