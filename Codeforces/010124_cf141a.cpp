//cf141a
#include <iostream>
#include <string>
#include <algorithm>

bool permutable(std::string a, std::string b, std::string c)
{
    a.append(b);
    if (a.size() != c.size())
        return false;

    std::sort(a.begin(), a.end());
    std::sort(c.begin(), c.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != c[i])
            return false;
    }

    return true;
}

int main()
{
    std::string guest, host, letters;
    std::cin >> guest >> host >> letters;

    if (permutable(guest, host, letters))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
