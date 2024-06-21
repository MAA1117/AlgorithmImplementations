#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>



bool is_in(char c, std::vector<char>& s)
{
    bool ret;
    std::find(s.begin(), s.end(), c) != std::end(s)
        ? ret=true : ret=false;
    return ret;
}

int main()
{
    /* std::string INPUT = */ 
    /*     "5\n" */
    /*     "3\n" */
    /*     "ABA\n" */
    /*     "11\n" */
    /*     "DDBBCCCBBEZ\n" */
    /*     "7\n" */
    /*     "FFGZZZY\n" */
    /*     "1\n" */
    /*     "Z\n" */
    /*     "2\n" */
    /*     "AB"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::string str;
        std::cin >> str;
        std::vector<char> already;
        bool ok = true;
        for(int i=0; i<n; i++)
        {
            if(!is_in(str[i], already))
                already.push_back(str[i]);
            else if(str[i] != str[i-1])
            {
                ok = false;
                break;
            }
        }
        if(ok == true)
        {
            std::cout << "YES" << '\n';
        }
        else
        {
            std::cout << "NO" << '\n';
        }
    }
}
