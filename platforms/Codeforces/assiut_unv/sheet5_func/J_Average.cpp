#include <iostream>
#include <iomanip>

long double average (){
    int l {0};
    std::cin >> l;
    double arr [l];
    double sum {0};
    for (int i = 0; i < l; i++){
        std::cin >> arr[i];
        sum += arr[i];
    }
    
    return sum / (long double) l;
}

int main (){
    std::cout  << std::fixed << std::setprecision(7)<< average() << "\n";
    return 0;
}