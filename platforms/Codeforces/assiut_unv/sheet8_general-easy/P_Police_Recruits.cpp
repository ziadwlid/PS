#include <iostream>
#include <vector>
int main()
{
    int events{0}; std::cin >> events;
    int input_1{0}, untreated{0};
    std::vector<int> arr;
    while (events--)
    {
        std::cin >> input_1;
        if (input_1 > 0)
        {
            for (int i = 0; i < input_1; i++)
                arr.push_back(1);
        }
        else
        {
            if (arr.empty())
                untreated++;
            else
                arr.pop_back();
        }
    }
    std::cout << untreated;
    return 0;
}