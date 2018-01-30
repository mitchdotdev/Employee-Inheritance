#include "menu.h"

int welcome() {
	int choice;
	std::string welcomePrompt = "\nWelcome!\n"
								"Are you a . . .\n\n"
								"[ 1 ] CS1C Employee\n"
								"[ 2 ] Programmer\n"
								"[ 3 ] Software Architect\n\n"
								"[ 0 ] Exit\n\n"
								": ";

	std::cout << welcomePrompt;
	std::cin  >> choice;
	while(std::cin.fail() || ( choice > 3 || choice < 0 ))
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');

		std::cout << "\n\nINVALID INPUT . . .\n";

		std::cout << welcomePrompt;
		std::cin  >> choice;
	}
	std::cin.clear();
	std::cin.ignore(100, '\n');
	return choice;
}

int addOrEdit() {
	int choice;
	std::string infoChange = "\nWould you like to add or edit information . . .\n\n"
								 "[ 1 ] Add\n"
								 "[ 2 ] Edit\n\n"
								 ": ";

	std::cout << infoChange;
	std::cin  >> choice;
	while(std::cin.fail() || ( choice < 1 || choice > 2 ))
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');

		std::cout << "\n\nINVALID INPUT . . .\n";

		std::cout << infoChange;
		std::cin  >> choice;
	}
	std::cin.clear();
	std::cin.ignore(100, '\n');
	return choice;
}
