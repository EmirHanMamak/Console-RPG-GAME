#pragma once
#include "Inventory.h"
class Character
{
public:
	Character();
	~Character();

	//Operations Operasyonlar

	//Functions Fonksiyonlar
	void initialize(const std::string name);
	void printStats() const;
	void lvlUp();
	//Accessors aksesuarlar
	inline const double& getX() const { return this->xPos; }
	inline const double& getY() const { return this->yPos; }

	inline const std::string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }

	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getStamina() const { return this->stamina; }

	inline const int& getMinDamage() const { return this->minDamage; }
	inline const int& getMaxDamage() const { return this->maxDamage; }
	inline const int& getDefance() const { return this->defance; }



	//Modifiers	Deðiþtiriciler
private:
	double xPos;
	double yPos;

	std::string name;
	int level;
	int exp;
	int expNext;


	int strenght;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int minDamage;
	int maxDamage;
	int defance;
	int luck;

	int statePoints;
	int skillPoints;


};

