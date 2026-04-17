#include <iostream>
#include <string>
bool is_vowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void count_vowels(std::string s, int index, int count)
{
    if (index == s.length())
    {
        std::cout << count << "\n";
        return;
    }
    if (is_vowel(s[index]))
        count++;
    count_vowels(s, index + 1, count);
}
int main()
{
    std::string str;
    getline(std::cin, str);
    count_vowels(str, 0, 0);
    return 0;
}