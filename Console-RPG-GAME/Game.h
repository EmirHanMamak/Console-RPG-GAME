#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "Functions.h"

using namespace std;
class Game
{
public:
	Game();
	virtual ~Game();

	//Operations Operasyonlar

	//Functions Fonksiyonlar

	//Accessors aksesuarlar
	inline bool getPlaying() const { return this->playing; }
	//Modifiers	De�i�tiriciler
void mainMenu();
private:
	int choice;
	bool playing;
};

