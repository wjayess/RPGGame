#include <iostream>
#include "Main.h"
#include "Player.h"

using namespace std;

void AddXPDialogue(Player ply)
{
	int maxXPAdd = 20000;
	int choice;
	int amount = 0;
	bool run = true;

	while (run)
	{
		cout << "Level: " << ply.GetLevel() << endl
			<< "XP: " << ply.GetXP() << endl << "Choose what to do:\n"
			<< "1. Add XP\n" << "2. Quit game\n";

		if (!(cin >> choice))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			clrscr();

			cout << "Please pick a valid option.\n\n";
		}
		else if (choice == 1 || choice == 2)
		{
			switch (choice)
			{
			case 1:
				clrscr();

				cout << "How much:\n";

				if (!(cin >> amount))
				{
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

					clrscr();

					cout << "Please enter a number that's below " << maxXPAdd << " and a positive integer.\n\n";
				}
				else if (amount > maxXPAdd && amount >= 0)
				{
					clrscr();

					cout << "Please enter a number that's below " << maxXPAdd << " and a positive integer.\n\n";
				}
				else
				{
					ply.AddXP(amount);

					clrscr();
				}

				break;
			case 2:
				run = false;

				break;
			}
		}
		else
		{
			clrscr();
			cout << "Please pick a valid option.\n\n";
		}
	}
}