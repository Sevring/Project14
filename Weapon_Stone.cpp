#include "Weapon_Stone.h"
#include <iostream>
using std::cout;
using std::endl;


Weapon_Stone::Weapon_Stone(float _atk, float _dura):
	Weapon(_atk, _dura)
{
	cout << "Weapon_Stone ������" << endl;

}
Weapon_Stone::~Weapon_Stone()
{
	cout << "Weapon_Stone �Ҹ���" << endl;
}

void Weapon_Stone::Attack()
{
	cout << "Weapon_Ston ����" << endl;
}