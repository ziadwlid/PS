#include <iostream>
#include <string>
#include <cctype>
int main()
{
    long long a, b, c;
    std::cin >> a >> b;
    c = a + b;
    std::string s_a, s_b, s_c;
    s_a = std::to_string(a);
    s_b = std::to_string(b);
    s_c = std::to_string(c);

    int cnt = 1;
    int new_a {}, new_b {}, new_c {};
    for (int i = s_a.length() - 1; i >= 0; i--){
        if (s_a[i] == '0') continue;
        new_a += (s_a[i] - '0') * cnt;
        cnt *= 10;
    }
    cnt = 1;
    for (int i = s_b.length() - 1; i >= 0; i--){
        if (s_b[i] == '0') continue;
        new_b += (s_b[i] - '0') * cnt;
        cnt *= 10;
    }
    cnt = 1;
    for (int i = s_c.length() - 1; i >= 0; i--){
        if (s_c[i] == '0') continue;
        new_c += (s_c[i] - '0') * cnt;
        cnt *= 10;
    }

    if (new_a + new_b == new_c) std::cout << "YES\n";
    else std::cout << "NO\n";
    return 0;
}