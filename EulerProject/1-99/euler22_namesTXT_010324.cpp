// euler22
/*
names.txt contains a list of >5000 names in the format "MARY","PATRICIA","LINDA", etc.

Read the file and sort the names into alphabetical order. Then working out
the alphabetical value for each name, multiply this value by its alphabetical
position in the list to obtain a name score.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

int getAlphabeticalValue(const std::string &name)
{
    int value = 0;
    for (char c : name)
    {
        if (isalpha(c))
            value += toupper(c) - 'A' + 1;
    }
    return value;
}

int main()
{
    std::vector<std::string> namesList;

    std::ifstream file("C:/dev/src/docs/names.txt");
    if (!file)
    {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line, ','))
    {
        size_t firstQuote = line.find('\"');
        size_t lastQuote = line.rfind('\"');
        if (firstQuote != std::string::npos && lastQuote != std::string::npos)
            namesList.push_back(line.substr(firstQuote + 1, lastQuote - firstQuote - 1));
    }
    file.close();

    std::sort(namesList.begin(), namesList.end());

    long long totalScore = 0;
    for (size_t i = 0; i < namesList.size(); ++i)
    {
        int nameScore = getAlphabeticalValue(namesList[i]) * (i + 1);
        totalScore += nameScore;
    }

    std::cout << "Total score: " << totalScore << std::endl;
}

/*
NOTES
*****
[Out]
Total score: 871198282
*/