#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>

int main(){
    std::deque <int> dq;
    int testCases;
    std::cin >> testCases;
    while(testCases--){
        int x{};
        std::string s;
        std::cin >> s;
        if (s == "push_back"){
            std::cin >> x;
            dq.push_back(x);
        }
        else if (s == "push_front"){
            std::cin >> x;
            dq.push_front(x);
        }
        else if (s == "pop_front" && !dq.empty()){
            dq.pop_front();
        }
        else if (s == "pop_back" && !dq.empty()){
            dq.pop_back();
        }
        else if (s == "front" && !dq.empty()){
            std::cout << dq.front() << "\n";
        }
        else if (s == "back" && !dq.empty()){
            std::cout << dq.back() << "\n";
        }
        else if (s == "print" && !dq.empty()){
            std::cin >> x;
            std::cout << dq[x-1] << "\n";
        }
    }
    return 0;
}