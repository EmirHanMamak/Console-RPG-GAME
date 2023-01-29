#include "Character.h"
Character::Character() {
	this->name = "";
	this->exp = 0;
	this->expNext = 0;
	this->hp = 0;
	this->hpMax = 0;
	this->lvl = 0;
	this->stamina = 0;
	this->minDamage = 0;
	this->maxDamage = 0;
	this->defance = 0;
}	
Character::~Character() {

}

void Character::initialize(int level, std::string name) {
	this->name = name;
	this->exp = 0;
	this->expNext = level * 100;
	this->hp = 10;
	this->hpMax = 10;
	this->lvl = level;	
	this->stamina = 10;
	this->minDamage = 2;
	this->maxDamage = 4;
	this->defance = 1;
}