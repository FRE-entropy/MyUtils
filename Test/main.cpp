#include <string>
#include <iostream>
#include "ArrayUtils.h"
#include <set>


int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << ArrayUtils::length(a) << std::endl;
	std::cout << ArrayUtils::toString(a, "[", ", ", "]") << std::endl;
	std::cout << ArrayUtils::toString(a) << std::endl;
	return 0;
}