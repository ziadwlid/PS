#include <iostream>
int main()
{
    int testCases {};
    std::cin >> testCases;
    while (testCases--){
        int n {};
        std::string str, check = "";
        int ballons {};
        std::cin >> n;
        std::cin >> str;
        for (int i = 0; i < str.length(); i++){
            bool found = false;
            for (int j = 0; j < check.length(); j++){
                if (str[i] == check[j]){
                    ++ballons;
                    found = true;
                    break;
                }
            }
            if (!found) {
                check += str[i];
                ballons += 2;
            }
        }
        std::cout << ballons << "\n";
    }
    
    return 0;
}