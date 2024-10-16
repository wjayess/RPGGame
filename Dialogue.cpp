#include <string>
#include <iostream>
#include "Player.h"
#include "GeneralFunctions.h"

void AddXPDialogue(Player &ply) {
    int maxXPAdd = 20000;
	int userInput;

	bool amountValidationPause = false;

	while (!amountValidationPause) {
		amountValidationPause = true;

		std::cout << "How much:\n";

		if (std::cin >> userInput) {
            if (IsInRange(userInput, -maxXPAdd, maxXPAdd)) {
			    ply.AddXP(userInput);
            }
        }
	}
}

void DialogueMenu(Player &ply)
{
	std::string userChoice;
    bool menuPaused = false;

    while (!menuPaused) {
        menuPaused = true;

		std::cout << "Level: " << ply.GetLevel() << std::endl
			<< "XP: " << ply.GetXP() << std::endl << "Choose what to do:\n"
			<< "1. Add XP\n" << "2. Quit game\n";
        std::cin >> userChoice;
        system("clear");

        if (userChoice.length() == 1 && isdigit(userChoice.at(0))) {
            switch (atoi(userChoice.c_str()))
            {
            case 1:
				AddXPDialogue(ply);

				break;
            case 2:
				return;

            default:
                std::cout << "you chose an invalid option!\n";

                break;
            }
        } else {
            std::cout << "you chose an invalid option!\n";
        }
        
        menuPaused = false;
    }
}