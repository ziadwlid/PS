#include <iostream>

void distinct_array(int n)
{
    int arr[n];
    int init = arr[0];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (init != arr[i]){
            init = arr[i];
        }
    }
    std::cout << init << "\n";
}

int main()
{
    int n{0};
    std::cin >> n;
    distinct_array(n);
    return 0;
}