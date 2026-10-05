#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long l = 0, r = n-1;
    while(l < r){
        if (arr[l] + arr[r] == x){
            cout << l+1 << " " << r+1;
            return 0;
        }
        else if (arr[l] + arr[r] < x){
            l++;
        }
        else{
            r--;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}