
#include "Game.h"

int main() {
	srand(time(NULL)); //Rand fonksiyonunu her seferinde rastgele olmasini saglar
	Game game;
	while (game.getPlaying())
	{
		game.mainMenu();

	}
}