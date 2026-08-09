#include <iostream>
#include <string>
#include <algorithm>
struct Dragon{
    int strength;
    int bonus;
};
bool cmp (Dragon a, Dragon b){
    return a.strength < b.strength;
}
int main()
{
    int kirito_strength, n_dragons;
    std::cin >> kirito_strength >> n_dragons;
    Dragon dragons[n_dragons];
    for (int i = 0; i < n_dragons; i++){
        std::cin >> dragons[i].strength >> dragons[i].bonus;
    }

    std::sort (dragons, dragons+n_dragons, cmp);
    for (const auto& dragon : dragons)
    {
        if (kirito_strength <= dragon.strength)
        {
            std::cout << "NO\n";
            return 0;
        }

        kirito_strength += dragon.bonus;
    }

    std::cout << "YES\n";

    return 0;
}