#include <iostream>
#include <algorithm>
#include <cmath>
/* #include <string> */
/* #include <sstream> */

struct Point
{
    int x, y;
};

int distance(Point A, Point B)
{
    float dx = A.x - B.x;
    float dy = A.y - B.y;
    int dist = std::sqrt(dx*dx + dy*dy);    
    return dist;
}

int main()
{
      
    /* std::string INPUT = "3\n" */
    /*                     "1 2\n" */
    /*                     "4 5\n" */
    /*                     "1 5\n" */
    /*                     "4 2\n" */
    /*                     "-1 1\n" */
    /*                     "1 -1\n" */
    /*                     "1 1\n" */
    /*                     "-1 -1\n" */
    /*                     "45 11\n" */
    /*                     "45 39\n" */
    /*                     "17 11\n" */
    /*                     "17 39\n"; */

    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    while(t--)
    {
        Point A, B, C, D;
        std::cin >> A.x >> A.y;
        std::cin >> B.x >> B.y;
        std::cin >> C.x >> C.y;
        std::cin >> D.x >> D.y;

        int l1 = distance(A, B);
        int l2 = distance(A, C);
        int length = std::min(l1, l2);

        std::cout << length * length << '\n';
    }
}
