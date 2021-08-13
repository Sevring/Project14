#include "Weapon_Stone.h"
#include <iostream>
using std::cout;
using std::endl;


Weapon_Stone::Weapon_Stone(float _atk, float _dura):
	Weapon(_atk, _dura)
{
	cout << "Weapon_Stone 생성자" << endl;

}
Weapon_Stone::~Weapon_Stone()
{
	cout << "Weapon_Stone 소멸자" << endl;
}

void Weapon_Stone::Attack()
{
	cout << "Weapon_Ston 어택" << endl;
}