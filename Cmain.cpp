#include <iostream>
#include "Player.h"
#include "Weapon_Stone.h"
#include "Weapon_Sword.h"

using std::cout; // �� �Ʒ��� std �ȿ� �ִ� �ֵ��� std�� �����ϰڵ� 
using std::endl;



	//class Papa
	//{
	//private:
	//	int m_PapaVal;
	//public:
	//	Papa(int _val) :
	//		m_PapaVal(0)
	//	{
	//		cout << "Papa ������" << endl;
	//	}
	//	~Papa()
	//	{
	//		cout << "Papa �Ҹ���" << endl;
	//	}
	//	virtual	void Print() const
	//	{
	//		cout << "PapaVal Print : " << m_PapaVal<<endl;
	//	}
	//};
	//
	//class Child : public Papa
	//{
	//private:
	//	float m_fChildVal;
	//public:
	//
	//	Child():
	//		Papa(0),
	//		m_fChildVal(0.0f)
	//	{
	//		cout << "Child ������" << endl;
	//	}
	//	~Child()
	//	{
	//		cout << "Child �Ҹ���" << endl;
	//	}
	//
	//	void Print() const
	//	{
	//		cout << "ChildVal Print : " << m_fChildVal << endl;
	//	}
	//};






int main()
{
//	//Papa papa; 
//
//	Child child;
//	cout << "Papa size : " << sizeof(Papa) <<"byte" << endl;
//	cout << "Child size : " << sizeof(Child) << "byte" << endl;
//
////printf("m_PapaVal : %p\n", &child.m_PapaVal);
////printf("m_ChildVal : %p\n", &child.m_fChildVal);
//
//	child.Print();
//	cout << endl;
//
//	Child* pChild = new Child(); // ( ) ������� - C#�� �޾ƾߵ�
//	
//
//	pChild->Print();
//
//	((Papa*)pChild)->Print();
//	
//	Papa* pchild = new Child();
//	
//	
//	
//	
//	delete pChild;

	Player* pPlayer = new Player();
	pPlayer->Attack();
	pPlayer->EquipWeapon(new Weapon_Stone(1.0f, 1.0f));
	pPlayer->Attack();
	pPlayer->EquipWeapon(new Weapon_Sword(2.0f, 3.0f));
	pPlayer->Attack();


	if (pPlayer)
	{
		delete pPlayer;
		pPlayer = nullptr;
	}



	return 0;
}
