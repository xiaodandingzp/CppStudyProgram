#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"
#include "MyInteger.h"

//��������
//���������������
int test();
int getAgeGloble(Person* person);

class MyClass
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

};


//MyClassA��sizeΪ16 
// ������˽�г�Ա�����Ǳ��������������ˣ���˷��ʲ�������ȷʵ���̳���ȥ��
class MyClassA : public MyClass {
public:
	int m_d;

	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  �����Է���˽������
		m_d = 4;
	}
};


int main() {
	cout << "size of MyClassA " << sizeof(MyClassA) << endl;
	return 0;
}

int test() {
	return 1;
}
