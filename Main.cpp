#include <iostream>

const int N = 20;

void PrintNumbers(int Limit, bool PrintOdd)
{
	//Initial value: 0 for even, 1 for odd
	int start = PrintOdd ? 1 : 0;
	for (int i = start; i <= Limit; i += 2)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

int main()
{
	//Output all even numbers from 0 to N
	std::cout << "Even numbers from 0 to " << N << ":" << std::endl;
	PrintNumbers(N, false);

	//Output all odd numbers from 0 to N
	std::cout << "Odd numbers from 0 to " << N << ":" << std::endl;
	PrintNumbers(N, true);
	
	return 0;
}