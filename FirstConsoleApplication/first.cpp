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
	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  不可以访问私有属性
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
