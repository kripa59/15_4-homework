#include <iostream>
#include <cmath>
#include "Helpers.h"

//int x;
//int y;

//int main()
//{
//	func(x, y);
//
//}

int N;
void func2(int N, int y)
{
	for (int i = y; i <= N; i += 2)
		std::cout << i << " ";
	std::cout << "\n";
}

int main()
{
	std::cout << "Enter number: ";
	std::cin >> N;

	std::cout << "Het:\n";
	func2(N, 0);

	std::cout << "Nohet:\n";
	func2(N, 1);

	return 0;
}





