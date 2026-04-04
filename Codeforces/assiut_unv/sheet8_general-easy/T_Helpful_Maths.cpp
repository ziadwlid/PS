#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

int main()
{
    std::vector<int> arr;
    std::string input;
    std::cin >> input;
    for (char c : input)
    {
        if (std::isdigit(c))
        {
            arr.push_back(c - '0'); 
        }
    }
    std::sort(arr.begin(), arr.end());
    
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i];
        if (i != arr.size() - 1) // not last element
        {
            std::cout << "+";
        }
    }
    return 0;
}