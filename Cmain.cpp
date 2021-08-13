#include <iostream>
#include "Player.h"
#include "Weapon_Stone.h"
#include "Weapon_Sword.h"

using std::cout; // 이 아래로 std 안에 있는 애들은 std를 생략하겠따 
using std::endl;



	//class Papa
	//{
	//private:
	//	int m_PapaVal;
	//public:
	//	Papa(int _val) :
	//		m_PapaVal(0)
	//	{
	//		cout << "Papa 생성자" << endl;
	//	}
	//	~Papa()
	//	{
	//		cout << "Papa 소멸자" << endl;
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
	//		cout << "Child 생성자" << endl;
	//	}
	//	~Child()
	//	{
	//		cout << "Child 소멸자" << endl;
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
//	Child* pChild = new Child(); // ( ) 상관없음 - C#은 달아야됨
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
