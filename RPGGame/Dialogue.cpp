#include <iostream>
#include "Player.h"

using namespace std;

void AddXPDialogue(Player ply)
{
	int choice;
	int amount;
	bool pause = false;
	bool run = true;

	while (run && !pause)
	{
		pause = true;

		cout << "Level: " << ply.GetLevel() << endl
			<< "XP: " << ply.GetXP() << endl << "Choose what to do:\n"
			<< "1. Add XP\n" << "2. Quit game\n";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "How much:\n";

			cin >> amount;

			ply.AddXP(amount);

			break;
		case 2:
			run = false;

			break;
		}

		pause = false;
	}
}