#ifndef _WEAPON_H_
#define _WEAPON_H_

class Weapon
{

private:
	float m_fattack;	//공격력
	float m_fdurability;//내구도
	

public: 
	Weapon(float _atk, float _dura);
	virtual~Weapon();


	virtual void Attack();
};






#endif