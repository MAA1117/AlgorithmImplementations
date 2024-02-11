#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
    /* std::string INPUT = */ 
    /*     "4\n" */
    /*     "abbaac\n" */
    /*     "ac\n" */
    /*     "bccddaaf\n" */
    /*     "zzzzzzzzzz"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */


    int t;
    std::cin >> t;
    while (t--)
    {
        std::string b;
        std::cin >> b;
        std::vector<char> answer;

        answer.push_back(b[0]);
        for (int i = 1; i < b.size(); i += 2)
        {
            answer.push_back(b[i]);
        }
        for (char element : answer)
        {
            std::cout << element;
        }
        std::cout << '\n';
    }
}

