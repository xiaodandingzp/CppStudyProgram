#include "swap.h"

//�����Ķ���
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void testPoint() {
	int a = 10;
	int * p = &a; //����ָ��,ָ���ֵ��a�ĵ�ַ��&ȡַ������
	cout << "a��ָ��Ϊ��" << &a << endl;
	cout << "ָ��P��ֵΪ��" << p << endl;
	//ָ���ʹ�ã�
	*p = 200;
	cout << "a��ֵΪ��" << a << endl;
	cout << "*p��ֵΪ��" << *p << endl;
}