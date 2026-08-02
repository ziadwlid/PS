#include <iostream>
#include <string>
#include <cctype>

bool is_uppercase(char input)
{
    if (!isupper(input))
        return false;
    else
        return true;
}

int main()
{
    std::string str;
    std::cin >> str;

    bool flag = true;

    for (int i = 1; i < str.length(); i++)
    {
        if (!is_uppercase(str[i]))
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (is_uppercase(str[i]))
                str[i] = tolower(str[i]);
            else
                str[i] = toupper(str[i]);
        }
    }

    std::cout << str << "\n";

    return 0;
}