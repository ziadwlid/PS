#include <iostream>

void find_max (int arr[], int size){
    int mazx {0};
    for (int i = 0; i < size; i++){
        if (arr[i] > mazx){
            mazx = arr[i];
        }
    }
    std::cout << mazx << "\n";
}
void find_min (int arr[], int size){
    int min {arr[0]};
    for (int i = 1; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    std::cout << min << " ";
}
int main (){
    int size {0};
    std::cin >> size;
    int arr [size];
    for (int i = 0; i < size; i++){
        std::cin >> arr[i];
    }
    find_min(arr, size);
    find_max(arr, size);
    return 0;
}