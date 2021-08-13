#include "Weapon_Sword.h"
#include <iostream>
using std::cout;
using std::endl;


Weapon_Sword::Weapon_Sword(float _atk, float _dura):
	Weapon(_atk, _dura)
{
	cout << "Weapon_Sword 생성자" << endl;

}
Weapon_Sword::~Weapon_Sword()
{
	cout << "Weapon_Sword 소멸자" << endl;
}

void Weapon_Sword::Attack()
{
	cout << "Weapon_Sword 어택" << endl;

}