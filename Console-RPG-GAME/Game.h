#pragma once

#include "Functions.h"
#include "Character.h"
#include <ctime>

class Game
{
public:
	Game();
	virtual ~Game();
	//Operations Operasyonlar

	//Functions Fonksiyonlar
	void initGame();
	void mainMenu();
	//Accessors aksesuarlar
	inline bool getPlaying() const { return this->playing; }
	//Modifiers	Deðiþtiriciler

private:
	int choice;
	bool playing;

	Character character;
};

