#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>


int main()
{
    /* std::string INPUT = */ 
    /*     "7\n" */
    /*     "1 3 1 3 2 1 2"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int n;
    std::cin >> n;
    int count1=0, count2=0, count3=0;
    std::vector<int> one;
    std::vector<int> two;
    std::vector<int> three;
    for (int i = 0; i < n; i++)
    {
        int in;
        std::cin >> in;
        if(in==1)
        {
            count1++;
            one.push_back(i);
        }
        else if(in==2)
        {
            count2++;
            two.push_back(i);
        }
        else
        {
            count3++;
            three.push_back(i);
        }
    }
    int count = std::min({count1, count2, count3});
    std::cout << count << '\n';
    for(int i=0; i<count; i++)
    {
        std::cout << 1+one[i] << " " << 1+two[i] << " " << 1+three[i] << '\n';
    }
}
