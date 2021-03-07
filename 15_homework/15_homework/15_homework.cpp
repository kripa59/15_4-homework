#include <iostream>
#include <cmath>

int main()
{
	int x;
	int y;
	std::cout << "Enter number: ";
	std::cin >> x;
	
	for (int y=0; y < x+1; y++)
	{
		if (y % 2 == 0)
			std::cout << y << " ";
	}
}





