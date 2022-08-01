#include "swap.h"
using namespace std;

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


//ð������
void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printArry(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << "i" << i << "is:" << arr[i] << endl;
	}
}

//���� ���ñ����ʼ�� ��ʼ����Ͳ����޸�
void testCite() {
	int a = 100;
	cout << "a:" << a << endl;
	int& b = a;
	b = 200;
	cout << "b:" << b << endl;
	cout << "a:" << a << endl;
}

// ���ô���  �β�����ʵ�� a,b�ı�ʱ���ⲿ��a,b��ֵҲ��ı�
void swap2(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
//ָ����Ϊ�����ķ���ֵ 
int * test1() {
	int a = 10;
	return &a;
}
//int *b = test1() //�����ԣ���Ϊa�ں���ִ�н���ʱ��������

//������Ϊ�����ķ���ֵ
int& returnCite() {
	int a = 10;
	return a;
}
//int &b = returnCite()  //�����ԣ���Ϊa�ں���ִ�н���ʱ�������ˣ�bָ����ڴ��ֵ������
// returnCite() = 100    //���ԣ�aָ����ڴ汻���¸�ֵΪ100

//�������� ��Ҫ���������βΣ���ֹ�ı�ʵ�ε�ֵ
void testConstCite(const int &a) {
	cout << "a:" << a << endl;
}