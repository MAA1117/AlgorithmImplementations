#include <iostream>
#include <string>
#include <vector>

void decode(const std::string& s)
{
    std::vector<int> vec;
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            vec.push_back(0);
        }
        else if ((s[i + 1]) == '.') 
        {
            vec.push_back(1);
            i++;
        }
        else
        {
            vec.push_back(2);
            i++;
        }
    }
    for (int x : vec)
    {
        std::cout << x;
    }
    std::cout << std::endl;
}


int main()
{
    std::string borze;
    std::cin >> borze;
    decode(borze);
}
