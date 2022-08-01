#include "swap.h"
using namespace std;

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


//冒泡排序
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

//引用 引用必须初始化 初始化后就不能修改
void testCite() {
	int a = 100;
	cout << "a:" << a << endl;
	int& b = a;
	b = 200;
	cout << "b:" << b << endl;
	cout << "a:" << a << endl;
}

// 引用传递  形参修饰实参 a,b改变时，外部的a,b的值也会改变
void swap2(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
//指针作为函数的返回值 
int * test1() {
	int a = 10;
	return &a;
}
//int *b = test1() //不可以，因为a在函数执行结束时被销毁了

//引用作为函数的返回值
int& returnCite() {
	int a = 10;
	return a;
}
//int &b = returnCite()  //不可以，因为a在函数执行结束时被销毁了，b指向的内存的值不在了
// returnCite() = 100    //可以，a指向的内存被重新赋值为100

//常量引用 主要用来修饰形参，防止改变实参的值
void testConstCite(const int &a) {
	cout << "a:" << a << endl;
}