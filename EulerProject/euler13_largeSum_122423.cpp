//euler13
/*
Find the first ten digits of the sum of the following one-hundred 50-digit numbers.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    const int LINES = 100;
    const int DIGITS = 50;
    std::vector<std::string> numbers;
    numbers.reserve(LINES);

    std::ifstream file("C:/dev/src/e13num.txt");
    if (!file)
    {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line))
    {
        if (line.length() != DIGITS)
        {
            std::cerr << "Error: A line does not contain 50 digits." << std::endl;
            return 1;
        }
        numbers.push_back(line);
    }
    file.close();

    std::string sum(DIGITS + 10, '0');
    for (int i = 0; i < LINES; i++)
    {
        int carry = 0;
        for (int j = DIGITS - 1, k = sum.size() - 1; j >= 0; --j, --k)
        {
            int digit = (numbers[i][j] - '0') + (sum[k] - '0') + carry;
            carry = digit / 10;
            sum[k] = (digit % 10) + '0';
        }
        for (int k = sum.size() - DIGITS - 1; carry > 0 && k >= 0; --k)
        {
            int digit = (sum[k] - '0') + carry;
            carry = digit / 10;
            sum[k] = (digit % 10) + '0';
        }
    }

    size_t pos = sum.find_first_not_of('0');
    if (pos != std::string::npos) 
    {
        std::cout << "Sum: " << sum.substr(pos, 10) << std::endl;
    }
    else std::cout << "Sum: 0" << std::endl;
}

/*
NOTES
*****

*/