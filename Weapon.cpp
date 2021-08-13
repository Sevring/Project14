#include "Weapon.h"
#include <iostream>
using std::cout;
using std::endl;

Weapon::Weapon(float _atk, float _dura):
	m_fattack(_atk), m_fdurability(_dura)
{
	cout << "Weapon 생성자" << endl;
}


Weapon::~Weapon()
{
	cout << "Weapon 소멸자" << endl;
}

void Weapon::Attack()
{
	cout << "Weapon 어택" << endl;
}
