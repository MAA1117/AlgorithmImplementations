#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

int main()
{
    /* std::string INPUT = */ 
    /*     "1 2 3 4\n" */
    /*     "123214";   // [Out] 13 */
    /*     "1 5 3 2\n"; */
    /*     "11221";     // [Out] 13 */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int a1, a2, a3, a4;
    std::cin >> a1 >> a2 >> a3 >> a4;

    std::map<char, int> value;
    value['1'] = a1;
    value['2'] = a2;
    value['3'] = a3;
    value['4'] = a4;

    std::string numbers;
    std::cin >> numbers;
    int sum = 0;
    for(char num : numbers)
    {
        sum += value[num];
    }
    std::cout << sum;
}
