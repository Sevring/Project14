#ifndef _WEAPON_H_
#define _WEAPON_H_

class Weapon
{

private:
	float m_fattack;	//���ݷ�
	float m_fdurability;//������
	

public: 
	Weapon(float _atk, float _dura);
	virtual~Weapon();


	virtual void Attack();
};






#endif