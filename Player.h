#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>

//#include "Weapon.h"
class Weapon;//Ŭ���� ���� ���� 

class Player
{
private:
	Weapon* m_pweapon;

public:
	Player();
	~Player();

	//�߻�ȭ 
	void EquipWeapon(Weapon* _weapon);
	void Attack();





};




#endif
