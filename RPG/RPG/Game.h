#pragma once
#include <ctime>
#include "Function.h"
#include "Character.h"



class Game
{
public:
	

	Game();
	virtual ~Game();

	//Ops

	//Functions
	
	void mainMenu();
	void initGame();

	//Accessors
	inline bool getPlaying() const { return this->playing; }

	//Modifiers
		 
private:
	int choice;
	bool playing;

	//Character Related	
	Character Character;

};

