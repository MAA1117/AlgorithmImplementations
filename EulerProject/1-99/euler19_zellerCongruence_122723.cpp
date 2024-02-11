//euler19
/*
How many Sundays fell on the first of the month during the
twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/

#include <iostream>

int zeller(int day, int month, int year)
{
    if (month < 3){month += 12; year--;}
    int k = year % 100;
    int j = year / 100;
    int wDay = (day + (13 * (month + 1)) + k + (k / 4) + (j / 4) - (2 * j)) % 7;
    return wDay;
}


int main()
{
    int sundayCount = 0;
    for (int year = 1901; year <= 2000; year++)
    {
        for (int month = 1; month <= 12; month++)
        {
            if (zeller(1, month, year) == 1) sundayCount++;
        }
    }
    std::cout << sundayCount << std::endl;
}

/*
NOTES
*****
lines 9-15: Zeller's congruence
*/