#ifndef _WEAPON_STONE_H_
#define _WEAPON_STONE_H_
#include "Weapon.h"


class Weapon_Stone : public Weapon
{
private:
public:
	Weapon_Stone(float _atk, float _dura); 
	~Weapon_Stone();

	void Attack();

};





#endif