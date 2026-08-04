#include <iostream>
std::string f (int a, std::string s1, std::string s2){
    return a == 1 ? s1+s2 : s2+s1;
}

int main (){
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << f(1,f(1,f(0,s1,s2)+s1,s2),s1+f(0,s1+s2,f(1,s2,s1)));
    
    return 0;
}