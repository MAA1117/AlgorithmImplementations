#include <iostream>
#include <string>
#include <sstream>

int main()
{
    /* std::string INPUT = */ 
    /*     "10\n" */
    /*     "a\n" */
    /*     "b\n" */
    /*     "c\n" */
    /*     "d\n" */
    /*     "e\n" */
    /*     "f\n" */
    /*     "g\n" */
    /*     "h\n" */
    /*     "i\n" */
    /*     "j"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    const char* CODEFORCES = "codeforces";
    while (t--)
    {
        char c;
        std::cin >> c;
        bool in = false;
        for(int i=0; i<10; i++)
        {
            if (c == CODEFORCES[i])
            {
                puts("YES");
                in = true;
                break;
            }
        }
        if (in==false)
            puts("NO");
    }
}
