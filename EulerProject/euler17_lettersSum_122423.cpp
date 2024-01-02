//euler17
/*
If all numbers 1-1000 are written in words, how many letters are used? 
*/

#include <iostream>
#include <string>
#include <vector>

std::string numberToWords(int n)
{
    std::vector<std::string> units =
    {
        "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    std::vector<std::string> tens =
    {
        "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };
    if (n == 1000) return "onethousand";
    else if (n >= 100)
    {
        if (n % 100 == 0) return units[n / 100] + "hundred";
        else return units[n / 100] + "hundredand" + numberToWords(n % 100);
    }
    else if (n >= 20) return tens[n / 10] + units[n % 10];
    else return units[n];
}

int main()
{
    int totalLength = 0;

    for (int i = 1; i <= 1000; ++i)
    {
        std::string word = numberToWords(i);
        totalLength += word.length();
    }

    std::cout << "Total letters: " << totalLength << std::endl;
}


/*
NOTES
*****
Do not count spaces or hyphens. For example, 342 (three hundred and forty-two)
contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The 
use of "and" when writing out numbers is in compliance with British usage.

*/