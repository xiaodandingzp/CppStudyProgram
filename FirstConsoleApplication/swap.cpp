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