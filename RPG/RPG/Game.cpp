#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{

}

//Functions 
void Game::initGame()
{
	std:: string name;
	std::cout << "Enter name for Character" << std::endl;
	getline(std::cin, name);

	Character.initialize(name);

}

void Game::mainMenu()
{
	std::cout << "= MAIN MENU =" << std::endl << std::endl;
	
	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character Sheet" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Make your choice, Champion" << std::endl;
	std::cin >> choice;
	std::cout << std::endl;


	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		Character.printStats();

		break;
	default:
		break;
	}
}
