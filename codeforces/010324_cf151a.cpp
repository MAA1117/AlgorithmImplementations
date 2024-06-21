//cf151a
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    std::vector<int> ingredientsSupply(3);

    int drinkSupply = (k * l) / nl;
    ingredientsSupply[0] = drinkSupply;

    int limeSupply = d * c;
    ingredientsSupply[1] = limeSupply;

    int saltSupply = p / np;
    ingredientsSupply[2] = saltSupply;

    std::sort(ingredientsSupply.begin(), ingredientsSupply.end());
    std::cout << ingredientsSupply[0] / n << std::endl;
}

/*
NOTES
*****
"n friends buy k bottles. Each bottle has 'l' ml. They have 
c limes and cut each of them into d slices. They have
p grams of salt.

To make a toast, each friend needs nl ml of the drink,
a slice of lime and np grams of salt.
How many toasts can each friend make?""

n -> friends
k -> bottles
l -> milliliters
c -> limes -> d slices
p -> grams salt

nl -> ml needed
k*l / nl -> drink supply

d * c -> lime supply

np -> grams salt needed 
p / np -> salt supply
*/