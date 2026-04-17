#include <iostream>
bool flag = true;
void palindrome_array (long long arr[], int r, int l){
    if (r >= l) { std::cout << "YES\n"; return; }
    if (arr[r] != arr[l]) { std::cout << "NO\n"; return; }
    palindrome_array(arr, r + 1, l - 1);
}

int main (){
    int length {0}; std::cin >> length;
    long long arr[length];
    for (int i = 0; i < length; i++){
        std::cin >> arr[i];
    }
    palindrome_array(arr, 0, length-1);
    return 0;
}