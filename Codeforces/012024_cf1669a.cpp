#include <iostream>
#include <string>
#include <sstream>

int main()
{
    /* std::string INPUT = */ 
    /*     "7\n" */
    /*     "-789\n" */
    /*     "1299\n" */
    /*     "1300\n" */
    /*     "1399\n" */
    /*     "1400\n" */
    /*     "1679\n" */
    /*     "2300"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */ 
    int t;
    std::cin >> t;
    while (t--)
    {
        int rating;
        std::cin >> rating;
        int div = 0;
        if(rating>=1900)
            div = 1;
        else if(rating>=1600)
            div = 2;
        else if(rating>=1400)
            div = 3;
        else
            div = 4;
        std::cout << "Division " << div << '\n'; 
    }
}
