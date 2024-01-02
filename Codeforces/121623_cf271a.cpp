#include <iostream>
#include <set>
#include <string>

bool UniqueDigits(int y)
{
    std::string yStr = std::to_string(y);
    std::set<char> digits(yStr.begin(), yStr.end());
    return digits.size() == yStr.size();
}

int main()
{
    int y;
    std::cin >> y;
    
    do {
        y++;
    } while (!UniqueDigits(y));
    
    std::cout << y << std::endl;
}
