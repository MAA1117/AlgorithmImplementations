//cf785a
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int faces = 0;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;

        if (s[0] == 'T')
        {
            faces += 4;
        }
        
        else if (s[0] == 'C')
        {
            faces += 6;
        }
        
        else if (s[0] == 'O')
        {
            faces += 8;
        }
        
        else if (s[0] == 'D')
        {
            faces += 12;
        }
        
        else if (s[0] == 'I')
        {
            faces += 20;
        }
    }

    std::cout << faces << std::endl;
}