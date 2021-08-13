#include "Player.h"
#include "Weapon.h"
#include <iostream>

using std::cout;
using std::endl;

Player::Player() : m_pweapon(nullptr)
{
	cout << "Player ������" << endl;


}

Player::~Player()
{
	cout << "Player �Ҹ���" << endl;

	if (m_pweapon)
	{
		delete m_pweapon;
		m_pweapon = nullptr;
	}
}

void Player::EquipWeapon(Weapon* _weapon)
{
	if (m_pweapon)
	{
		delete m_pweapon;
		m_pweapon = nullptr;
	}

	m_pweapon = _weapon;
}

void Player::Attack()
{
	if (m_pweapon) 
	{
		m_pweapon->Attack();
	}
	else
	{
		cout << "Weapon is Empty" << endl;
	}


}