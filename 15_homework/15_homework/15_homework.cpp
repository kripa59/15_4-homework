#include <iostream>
#include <cmath>

int main()
{
	int x;
	int y;
	std::cout << "Enter number: ";
	std::cin >> x;
	
	std::cout << "\n het: ";
	for (int y=0; y < x+1; y++)
	{
		if (y % 2 == 0)
			std::cout << y << " ";
	}
	std::cout << "\n Nehet: ";
	for (int y = 0; y < x; y++)
	{
		if (y % 2 != 0)
			std::cout << y << " ";
	}
}





