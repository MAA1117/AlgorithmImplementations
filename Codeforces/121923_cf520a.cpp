//cf520a
#include <iostream>
#include <string>
#include <cctype>
#include <unordered_set>

void convertLower(std::string &str)
{
    for (char &c : str)
    {
        c = std::tolower(static_cast<unsigned char>(c));
    }
}

bool containsAllChars(const std::string &str, const std::string &charsToFind)
{
    std::unordered_set<char> charsSet(charsToFind.begin(), charsToFind.end());

    for (char c : str)
    {
        charsSet.erase(c);
        if (charsSet.empty())
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    std::cin >> n;
    
    std::string stringIn;
    std::cin >> stringIn;
    convertLower(stringIn);

    std::string latinChars = "abcdefghijklmnopqrstuvwxyz";

    if (containsAllChars(stringIn, latinChars))
    {
        std::cout << "YES" << std::endl; 
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}