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


//ָ����������е�Ԫ��
void testPointArray() {
	int arr[5] = { 0, 1, 2, 3, 4 };
	cout << "����ĵ�һ��Ԫ��" << arr[0] << endl;
	int* p = arr;
	cout << "����ָ����ʵ�һ��Ԫ��" << *p << endl;
	p++; //��ָ�����ƫ��4���ֽ�
	cout << "����ָ����ʵڶ���Ԫ��" << *p << endl;
	cout << "����ָ����ʵ�����Ԫ��" << *(p + 1) << endl;
	//����ָ���������
	int* p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << *p2 << endl;
		p2++;
	}
}

//ָ���뺯��  ָ�봫�� ��ַ����.�ⲿ��a,b��ֵ�ᱻ�ı�
void testFunPoint(int *a, int *b){
	cout << "a:" << *a << endl;
	cout << "b:" << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a:" << *a << endl;
	cout << "b:" << *b << endl;
}


