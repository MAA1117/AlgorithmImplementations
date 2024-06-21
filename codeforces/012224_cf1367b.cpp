#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
    /* std::string INPUT = */ 
    /*     "4\n" */
    /*     "4\n" */
    /*     "3 2 7 6\n" // 2 */
    /*     "3\n" */
    /*     "3 2 6\n" // 1 */
    /*     "1\n" */
    /*     "7\n" // -1 */
    /*     "7\n" */
    /*     "4 9 2 1 18 3 0"; // 0 */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    while (t--)
    {
        int n; std::cin >> n;
        int badEven = 0;
        int badOdd = 0;
        for(int i=0; i<n; i++)
        {
            int x; std::cin >> x;
            if(i%2 && x%2==0)
            {
                badEven++;
            }
            else if(i%2==0 && x%2)
            {
                badOdd++;
            }
        }
        if(badEven==badOdd)
            std::cout << badEven << '\n';
        else
            std::cout << -1 << '\n';
    }
}
