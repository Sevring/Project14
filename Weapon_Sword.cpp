#include "Weapon_Sword.h"
#include <iostream>
using std::cout;
using std::endl;


Weapon_Sword::Weapon_Sword(float _atk, float _dura):
	Weapon(_atk, _dura)
{
	cout << "Weapon_Sword ������" << endl;

}
Weapon_Sword::~Weapon_Sword()
{
	cout << "Weapon_Sword �Ҹ���" << endl;
}

void Weapon_Sword::Attack()
{
	cout << "Weapon_Sword ����" << endl;

}