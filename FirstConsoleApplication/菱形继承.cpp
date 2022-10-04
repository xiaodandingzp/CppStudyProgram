#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"
#include "MyInteger.h"

class Animal {
public:
	int m_age;
};

//利用虚继承解决菱形继承的问题
//继承之前加上关键字 virtual 变为虚继承
//Animal为虚基类

class Sheep : virtual public Animal
{
};

class Tuo : virtual public Animal
{
};

class SheepTuo : public Sheep , public Tuo
{
};

void testSheepTuo() {
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 20;
	// 当菱形继承时需要加作用域区分
	cout << "st.Sheep::m_age" << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age" << st.Tuo::m_age << endl;
	//改为虚继承后 可以不区分作用域 因为只有一份数据了
	cout << "st.m_age" << st.Tuo::m_age << endl;
}

int main() {
	cout << "菱形继承" << endl;
	testSheepTuo();
	return 0;
}