#include "Character.h"
Character::Character() {
	this->xPos = 0.0;
	this->yPos = 0.0;
	this->name = "";
	this->level = 0;
	this->exp = 0;
	this->expNext =
		(50 / 3) * pow(level, 3) -
		6 * pow(level, 3) +
		((17 * level) - 11);

	this->strenght = 0;
	this->vitality = 0;
	this->dexterity = 0;
	this->intelligence = 0;
	this->luck = 0;


	this->hp = 0;
	this->hpMax = 0;
	this->stamina = 0;
	this->staminaMax = 0;
	this->minDamage = 0;
	this->maxDamage = 0;
	this->defance = 0;
	this->statePoints = 0;
	this->skillPoints = 0;


}
Character::~Character() {

}

void Character::initialize(const std::string name)
{
	this->xPos = 0.0;
	this->yPos = 0.0;

	this->name = name;
	this->level = 2;
	this->exp = 0;
	this->expNext = static_cast<int>((50 / 3) * ((pow(level, 3) - 
		6 * pow(level, 2)) + 
		17 * level - 12)) + 100;

	this->strenght = 5;
	this->vitality = 5;
	this->dexterity = 5;
	this->intelligence = 5;
	this->luck = 1;



	this->hp = 10;
	this->hpMax = 10;
	this->stamina = 10;
	this->staminaMax = 10;
	this->minDamage = 2;
	this->maxDamage = 4;
	this->defance = 1;
	this->statePoints = 0;
	this->skillPoints = 0;
}
void Character::printStats() const {
	std::cout << "\n";
	std::cout << "= Character sheet =" << std::endl;
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Level : " << this->level << std::endl;
	std::cout << "Exp : " << this->exp << std::endl;
	std::cout << "Exp to next lvl : " << this->expNext << std::endl;
	std::cout << "Exp : " << this->exp << std::endl;
	std::cout << "\n\n";
	std::cout << "Strenght: " << this->strenght << std::endl;
	std::cout << "Vitality: " << this->vitality << std::endl;
	std::cout << "Dexterity: " << this->dexterity << std::endl;
	std::cout << "Intelligence: " << this->intelligence << std::endl;
	std::cout << "\n\n";
	std::cout << "HP: " << this->hp << "/" << this->hpMax<< std::endl;
	std::cout << "Stamina: " << this->stamina << "/" << this->staminaMax << std::endl;
	std::cout << "Damage: " << this->minDamage << "-" << this->maxDamage << std::endl;
	std::cout << "Defance: " << this->defance << std::endl;
	std::cout << "Luck: " << this->luck << std::endl;
	std::cout << "\n";
	std::cout << "-----------------";
	std::cout << "\n";









}
void Character::lvlUp() {

	while(this->exp >= this->expNext) {
		this->exp -= this->expNext;
		this->level++;
		this->expNext =
			static_cast<int>((50 / 3) * ((pow(level, 3) -
				6 * pow(level, 2)) +
				17 * level - 12)) + 100;
		this->skillPoints++;
		this->statePoints++;
	}
}
