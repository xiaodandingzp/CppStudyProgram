#include "swap.h"
using namespace std;
#include "MyInteger.h"


//����ǰ��++�����  ���ص������á����ÿ��Ա�֤++��++myInteger����ʹ������ȷ��
MyInteger& MyInteger::operator++() {
	m_Num++;
	return *this;
}


//���غ���++����� ���ص���ֵ���������õĻ��������ý�� �൱��ǰ��++��
MyInteger MyInteger::operator++(int) {
	MyInteger temp = *this;
	m_Num++;
	return temp;
}


//�������������
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}