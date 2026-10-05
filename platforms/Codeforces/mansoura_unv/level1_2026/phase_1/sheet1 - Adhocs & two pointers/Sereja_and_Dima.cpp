#include <iostream>
#include <vector>
using namespace std;
int main(){
        int n; 
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int l = 0, r = n-1; 
        int Sereja = 0, Dima = 0, SerejaTurn = 1;
        while (l <= r){
            if (arr[l] > arr[r]){
                if (SerejaTurn){
                    Sereja += arr[l];
                }
                else {
                    Dima += arr[l];
                }
                l++;
            }
            else {
                if (SerejaTurn){
                    Sereja += arr[r];
                }
                else {
                    Dima += arr[r];
                }
                r--;
            }
                SerejaTurn = !SerejaTurn;
        }
        cout << Sereja << " " << Dima << "\n";
    return 0;
}