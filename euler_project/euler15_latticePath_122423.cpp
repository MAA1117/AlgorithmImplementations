// euler14
/*
Find the n of routes through a 20 x 20 grid
*/

#include <iostream>
typedef long long ll;

ll bc(int n, int k) {
  if (k > n - k)
    k = n - k;
  ll result = 1;
  for (int i = 0; i < k; ++i) {
    result *= (n - i);
    result /= (i + 1);
  }
  return result;
}

ll get_routes(int gridSize) { return bc(2 * gridSize, gridSize); }

int main() {
  int gridSize = 20;
  std::cout << "Number of routes through a " << gridSize << "x" << gridSize
            << " grid: " << get_routes(gridSize) << std::endl;
}

/*
NOTES
*****
unsigned long long factorial(unsigned int n)
{
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

C(2n, n)
-> C(n, k) = n! / (k! * (n - k)!)


*/
