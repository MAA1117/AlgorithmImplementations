//120823_cf677a.cpp

#include <iostream>

int main()
{
	int n, h, a, height;
	std::cin >> n >> h;

	int w_total = 0;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		height = a;

		if (height > h)
		{
			w_total += 2;	
		}
		else
		{
			w_total += 1;
		}
	}

	std::cout << w_total;
}