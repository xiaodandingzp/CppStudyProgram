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
	MyClass() {
		cout << " MyClass�Ĺ��캯�� " << endl;
	}

	virtual ~MyClass() {
		cout << " MyClass���������� " << endl;
	}
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
	MyClassA() {
		cout << " MyClassA�Ĺ��캯�� " << endl;
	}

	~MyClassA() {
		cout << " MyClassA���������� " << endl;
	}
	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  �����Է���˽������
		m_d = 4;
	}
};


int main() {
	MyClassA test = MyClassA();
	return 0;
}

int test() {
	return 1;
}
