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

//������̳н�����μ̳е�����
//�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
//AnimalΪ�����

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
	// �����μ̳�ʱ��Ҫ������������
	cout << "st.Sheep::m_age" << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age" << st.Tuo::m_age << endl;
	//��Ϊ��̳к� ���Բ����������� ��Ϊֻ��һ��������
	cout << "st.m_age" << st.Tuo::m_age << endl;
}

int main() {
	cout << "���μ̳�" << endl;
	testSheepTuo();
	return 0;
}