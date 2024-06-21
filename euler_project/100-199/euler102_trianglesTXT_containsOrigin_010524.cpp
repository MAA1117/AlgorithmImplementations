#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <sstream>

struct Point
{
    double x;
    double y;
};

double triangleArea(Point a, Point b, Point c)
{
    return std::abs((a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y)) / 2.0);
}

bool containsOrigin(Point a, Point b, Point c)
{
    Point origin = {0.0, 0.0};
    double areaABC = triangleArea(a, b, c);
    double areaOAB = triangleArea(origin, a, b);
    double areaOBC = triangleArea(origin, b, c);
    double areaOCA = triangleArea(origin, c, a);

    return (areaOAB + areaOBC + areaOCA == areaABC) && 
           (areaOAB >= 0.0) && (areaOBC >= 0.0) && (areaOCA >= 0.0);
}

Point parsePoint(const std::string& str)
{
    std::istringstream iss(str);
    Point p;
    iss >> p.x >> p.y;
    return p;
}

int main()
{
    const int LINES = 1000;

    std::ifstream file("C:/dev/src/docs/triangles.txt");
    if (!file)
    {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string line;
    int count = 0;
    while (std::getline(file, line))
    {
        std::vector<std::string> tokens;
        std::stringstream ss(line);
        std::string item;

        while (std::getline(ss, item, ','))
        {
            tokens.push_back(item);
        }

        if (tokens.size() != 6)
        {
            std::cerr << "Invalid line format: " << line << std::endl;
            continue;
        }

        Point a, b, c;
        try
        {
            a.x = std::stod(tokens[0]);
            a.y = std::stod(tokens[1]);
            b.x = std::stod(tokens[2]);
            b.y = std::stod(tokens[3]);
            c.x = std::stod(tokens[4]);
            c.y = std::stod(tokens[5]);
        }
        catch (const std::invalid_argument& e)
        {
            std::cerr << "Invalid number in line: " << line << std::endl;
            continue;
        }
       
        if (containsOrigin(a, b, c))
                count++;
    }

    file.close();
    std::cout << "Triangles containing origin: ";
    std::cout << count << std::endl;
}

/*
NOTES
*****

[Out] 
228
*/
