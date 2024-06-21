//cf443a

#include <iostream>
#include <unordered_set>
#include <set>

int main()
{
    std::string s;
    std::getline(std::cin, s);
    std::unordered_set<char> set;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            set.insert(s[i]);
        }
    }
    std::cout << set.size() << std::endl;
}
