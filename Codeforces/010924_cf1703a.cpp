#include <iostream>
#include <string>
#include <cctype>

void toLower(std::string& s)
{
    for (char& c : s)
        c = std::tolower(static_cast<unsigned char>(c));
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        std::string s; std::cin >> s;
        toLower(s);
        if (s == "yes")
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
}
