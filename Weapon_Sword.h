#ifndef _WEAPON_SWORD_H_
#define _WEAPON_SWORD_H_
#include "Weapon.h"


class Weapon_Sword : public Weapon
{
private:
public:

	Weapon_Sword(float _atk, float _dura);
	~Weapon_Sword();

	void Attack();


};




#endif
