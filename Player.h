#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>

//#include "Weapon.h"
class Weapon;//클래스 전방 선언 

class Player
{
private:
	Weapon* m_pweapon;

public:
	Player();
	~Player();

	//추상화 
	void EquipWeapon(Weapon* _weapon);
	void Attack();





};




#endif
