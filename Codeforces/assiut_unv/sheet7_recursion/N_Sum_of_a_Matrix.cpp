#include <iostream>
int r {0}, c{0};
void sum_of_matrix (int arr_a[][100], int arr_b[][100], int i, int j){
    if (i == r) return;
    if (j == c){
        std::cout << "\n";
        sum_of_matrix(arr_a, arr_b, i+1, 0);
        return;
    }
    std::cout << arr_a[i][j] + arr_b[i][j] << " ";
    sum_of_matrix(arr_a, arr_b, i, j+1);
}
int main(){
    std::cin >> r >> c;
    int arr_a[100][100];
    int arr_b[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            std::cin >> arr_a[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            std::cin >> arr_b[i][j];
    sum_of_matrix(arr_a, arr_b, 0, 0);
    return 0;
}