#include "Weapon.h"
#include <iostream>
using std::cout;
using std::endl;

Weapon::Weapon(float _atk, float _dura):
	m_fattack(_atk), m_fdurability(_dura)
{
	cout << "Weapon ������" << endl;
}


Weapon::~Weapon()
{
	cout << "Weapon �Ҹ���" << endl;
}

void Weapon::Attack()
{
	cout << "Weapon ����" << endl;
}
