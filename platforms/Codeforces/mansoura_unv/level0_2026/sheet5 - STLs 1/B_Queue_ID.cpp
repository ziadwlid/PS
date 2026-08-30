#include <iostream>
#include <algorithm>
#include <queue>

int main(){
    int testCases;
    std::cin >> testCases;
    std::queue <int> q;
    while(testCases--){
        int n, id;
        std::cin >> id >> n;
        if (id == 1){
            q.push(n);
        }
        else if (id == 2 && !q.empty()){
            int a = q.front();
            q.pop();
            if (a == n){
                std::cout << "yes\n";
            }
            else {
                std::cout << "no\n";
            }
        }
        else if (id == 2 && q.empty()){
            std::cout << "no\n";
        }
    }
    return 0;
}