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
	static int m_static;

	static void testStatic() {
		cout << " MyClass.testStatic " << endl;
	}

	static void testStatic(int a) {
		cout << " MyClass.testStatic(int a) " << endl;
	}

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

	static void testStatic() {
		cout << " MyClassA.testStatic " << endl;
	}
	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  �����Է���˽������
		m_d = 4;
	}
};


//int main() {
//	MyClassA test = MyClassA();
//	//ͨ���������
//	test.m_static;
//	test.testStatic();
//	test.MyClass::m_static;
//	test.MyClass::testStatic();
//	test.MyClass::testStatic(10);
//	//ͨ����ȥ����
//	MyClassA::m_static;
//	MyClassA::testStatic();
//	MyClassA::MyClass::m_static;
//	MyClassA::MyClass::testStatic();
//	MyClassA::MyClass::testStatic(10);
//	return 0;
//}

int test() {
	return 1;
}
