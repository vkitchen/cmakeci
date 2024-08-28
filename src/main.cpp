#include <iostream>
#include "fact.h"
#include "fib.h"

int main(int argc, char** argv) {
	std::cout << "Fibonacci:" << std::endl;
	
	for (int i = 0; i < 11; i++)
		std::cout << i << ": " << fib(i) << std::endl;

	std::cout << "Factorial:" << std::endl;

	for (int i = 0; i < 11; i++)
		std::cout << i << ": " << fact(i) << std::endl;

	return 0;
}
