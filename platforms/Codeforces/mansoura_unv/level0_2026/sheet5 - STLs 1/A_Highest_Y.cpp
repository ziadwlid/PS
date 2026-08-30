#include <iostream>
#include <algorithm>

struct pr{
    std::pair<int,int> p;
};
bool cmp(pr a, pr b){
    return a.p.second > b.p.second;
}
int main(){
    int n;
    std::cin >> n;
    pr a[n];
    for(int i=0;i<n;i++){
        std::cin >> a[i].p.first >> a[i].p.second;
    }
    std::sort (a, a+n,cmp);
    for(int i=0;i<n;i++){
        std::cout << a[i].p.first << " " << a[i].p.second << std::endl;
    }
    return 0;
}