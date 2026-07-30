#include <iostream>
int main()
{
    int V, A, B, C;
    std::cin >> V >> A >> B >> C;
    while (true){
        if (V < A){ std::cout << 'F' << "\n"; break;}
        V -= A;
        if (V < B){ std::cout << 'M' << "\n";break;}
        V -= B;
        if (V < C) { std::cout << 'T' << "\n"; break;}
        V -= C; 
    }    
    return 0;
}