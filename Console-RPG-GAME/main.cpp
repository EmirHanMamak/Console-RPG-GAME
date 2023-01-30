
#include "Game.h"

int main() {
	srand(time(NULL)); //Rand fonksiyonunu her seferinde rastgele olmasini saglar
	Game game;
	Inventory inv;
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.addItem(Item());
	inv.debugPrint();
	while (game.getPlaying())
	{
		game.initGame();
		
		game.mainMenu();

	}
}