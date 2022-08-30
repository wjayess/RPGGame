#include <iostream>

using namespace std;

void clrscr()
{
	std::cout << "\033[2J\033[1;1H";
}