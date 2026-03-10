#include <iostream>
using namespace std;
int sum(int arr[], int len){
    if (len == 0)
        return 0;
    return arr[len-1] + sum(arr, len-1);
    
}

int main()
{
    int len = 5;
    int arr[len] = {1, 8, 2, 10, 3};
    cout << sum(arr, len) << endl;
    return 0;
}
