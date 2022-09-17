#include "swap.h"
using namespace std;
#include "MyInteger.h"


//重载前置++运算符  返回的是引用。引用可以保证++（++myInteger）的使用是正确的
MyInteger& MyInteger::operator++() {
	m_Num++;
	return *this;
}


//重载后置++运算符 返回的是值，返回引用的会会立即获得结果 相当于前置++了
MyInteger MyInteger::operator++(int) {
	MyInteger temp = *this;
	m_Num++;
	return temp;
}


//左移运算符重载
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}