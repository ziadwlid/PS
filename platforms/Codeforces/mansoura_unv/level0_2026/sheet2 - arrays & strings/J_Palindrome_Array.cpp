#include <iostream>
#include <algorithm>
int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
   for (int i = 0, j = n - 1; i < j; i++, j--){
        if (arr[i] != arr[j]){
            std::cout << "NO\n";
            return 0;
        }
   }
   std::cout << "YES\n";
    return 0;
}