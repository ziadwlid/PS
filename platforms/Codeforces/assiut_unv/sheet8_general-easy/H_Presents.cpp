#include <iostream>

int main (){
    int n_friends {0}; std::cin >> n_friends;
    int arr[n_friends], result[n_friends];
    for (int i = 0; i < n_friends; i++){
        std::cin >> arr[i];
    }
    for (int i = 0; i < n_friends; i++){
        result[arr[i] - 1] = i + 1;
    }
    for (int i = 0; i < n_friends; i++){
        std::cout << result[i] << " ";
    }
    return 0;
}