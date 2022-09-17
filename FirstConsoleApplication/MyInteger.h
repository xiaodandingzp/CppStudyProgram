#pragma once


using namespace std;

class MyInteger {
public:
//重载前置++运算符
	MyInteger& operator++();
	//重载后置++运算符
	MyInteger operator++(int);
public:
	int m_Num = 0;
};

ostream& operator<<(ostream& cout, MyInteger myint);