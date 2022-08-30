#include <iostream>

using namespace std;

int ClampInt(int n, int lower, int upper)
{
	int updatedNum = n;

	if (n <= lower)
		updatedNum = lower;
	else if (n >= upper)
		updatedNum = upper;

	return updatedNum;
}

void clrscr()
{
	std::cout << "\033[2J\033[1;1H";
}