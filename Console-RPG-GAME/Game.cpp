#include "Game.h"

Game::Game() {

	choice = 0;
	playing = true;
}

Game::~Game() {
		
}

void Game::initGame() {
	std::string name;
	std::cout << "Enter a name for character : ";
	getline(std::cin, name);
	character.initialize(name);
}
void Game::mainMenu() {
	std::cout << "== MAIN MENU ==\n " << std::endl;
	std::cout << "0: Quit " << std::endl;
	std::cout << "1: Travel " << std::endl;
	std::cout << "2: Shop " << std::endl;
	std::cout << "3: Level Up " << std::endl;
	std::cout << "4: Rest " << std::endl;
	std::cout << "5: Character sheet" << std::endl;
	std::cout << "Choice : ";

	std::cin >> choice;
	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		character.printStats();
	default:
		break;
	}
}
