//euler4
/*
find the largest palindrome made from the product of two 3-digit numbers
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "hfiles\Timer.h"

bool isPalindrome(int num)
{
    std::string str = std::to_string(num);
    std::string rev_str = str;
    std::reverse(rev_str.begin(), rev_str.end());
    return str == rev_str;
}

int main()
{
    Timer tr;

    std::vector<std::tuple<int, int, int>> palindromes;

    for (int i = 500; i < 1000; ++i)
    {
        for (int j = i; j < 1000; ++j)
        {
            int product = i * j;
            if (isPalindrome(product))
            {
                palindromes.push_back(std::make_tuple(i, j, product));
            }
        }
    }

    // Find the largest palindrome
    if (!palindromes.empty())
    {
        auto max_palindrome = *std::max_element(palindromes.begin(), palindromes.end(),
                                                [](const std::tuple<int, int, int>& a, const std::tuple<int, int, int>& b)
                                                {
                                                    return std::get<2>(a) < std::get<2>(b);
                                                });
        
        std::cout << "Largest palindrome is " << std::get<2>(max_palindrome)
                  << " which is the product of " << std::get<0>(max_palindrome)
                  << " and " << std::get<1>(max_palindrome) << std::endl;
    }
    else
    {
        std::cout << "No palindrome found" << std::endl;
    }
}


/*
Notes:

*/