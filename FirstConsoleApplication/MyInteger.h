#pragma once


using namespace std;

class MyInteger {
public:
//����ǰ��++�����
	MyInteger& operator++();
	//���غ���++�����
	MyInteger operator++(int);
public:
	int m_Num = 0;
};

ostream& operator<<(ostream& cout, MyInteger myint);