#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"

//函数声明
//函数可以声明多次
int test();

class MyClass
{
public:
	int m_a;
	int m_b;
	int m_c;

	MyClass(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {

	}
};


int main() {

	MyClass myClass = MyClass(10, 20, 30);
	cout << "m_a" << myClass.m_a << endl;
	cout << "m_b" << myClass.m_b << endl;
	cout << "m_c" << myClass.m_c << endl;

	Person pp = Person("zhangping", 180);
	cout << "name:" << pp.name << endl;

	Person p1;
	Person p2("zhangping", 180); 
	Person p3(p2);

	Person p4;
	Person p5 = Person("zhangping", 180);
	Person p6 = Person(p5);
	p5.setAge(30);
	cout << "p5的年龄" << p5.getAge() << endl;
	Person("zhangping", 179); //匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象

	return 0;
}

int test() {
	return 1;
}
