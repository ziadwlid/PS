#include <string>
#include <vector>

std::string warn_the_sheep(std::vector<std::string> queue) {
    int n = queue.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (queue[i] == "wolf") {
            if (i == n - 1) {
                return "Pls go away and stop eating my sheep";
            } else {
                int sheepPos = n - 1 - i;
                return "Oi! Sheep number " + std::to_string(sheepPos) + "! You are about to be eaten by a wolf!";
            }
        }
    }
    return "";
}