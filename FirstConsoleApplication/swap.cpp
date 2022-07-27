#include "swap.h"

//函数的定义
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void testPoint() {
	int a = 10;
	int * p = &a; //定义指针,指针的值是a的地址，&取址操作符
	cout << "a的指针为：" << &a << endl;
	cout << "指针P的值为：" << p << endl;
	//指针的使用：
	*p = 200;
	cout << "a的值为：" << a << endl;
	cout << "*p的值为：" << *p << endl;
}


//指针访问数组中的元素
void testPointArray() {
	int arr[5] = { 0, 1, 2, 3, 4 };
	cout << "数组的第一个元素" << arr[0] << endl;
	int* p = arr;
	cout << "利用指针访问第一个元素" << *p << endl;
	p++; //让指针向后偏移4个字节
	cout << "利用指针访问第二个元素" << *p << endl;
	cout << "利用指针访问第三个元素" << *(p + 1) << endl;
	//利用指针访问数组
	int* p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << *p2 << endl;
		p2++;
	}
}

//指针与函数  指针传递 地址传递.外部的a,b的值会被改变
void testFunPoint(int *a, int *b){
	cout << "a:" << *a << endl;
	cout << "b:" << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a:" << *a << endl;
	cout << "b:" << *b << endl;
}


