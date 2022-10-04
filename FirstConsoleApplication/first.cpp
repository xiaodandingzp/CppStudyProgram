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

	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  不可以访问私有属性
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
