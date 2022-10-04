#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"
#include "MyInteger.h"

//函数声明
//函数可以声明多次
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
		cout << " MyClass的构造函数 " << endl;
	}

	virtual ~MyClass() {
		cout << " MyClass的析构函数 " << endl;
	}
protected:
	int m_b;
private:
	int m_c;

};


//MyClassA的size为16 
// 父类中私有成员属性是被编译器给隐藏了，因此访问不到，但确实被继承下去了
class MyClassA : public MyClass {
public:
	int m_d;
	MyClassA() {
		cout << " MyClassA的构造函数 " << endl;
	}

	~MyClassA() {
		cout << " MyClassA的析构函数 " << endl;
	}

	static void testStatic() {
		cout << " MyClassA.testStatic " << endl;
	}
	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  不可以访问私有属性
		m_d = 4;
	}
};


//int main() {
//	MyClassA test = MyClassA();
//	//通过对象访问
//	test.m_static;
//	test.testStatic();
//	test.MyClass::m_static;
//	test.MyClass::testStatic();
//	test.MyClass::testStatic(10);
//	//通过类去访问
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
