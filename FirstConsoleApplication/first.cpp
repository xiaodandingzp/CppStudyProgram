#include<iostream>
using namespace std;
#include "swap.h"

//函数声明
//函数可以声明多次
int test();

int main() {
	cout << "zhangping is good" << endl;
	int a = 2;
	int b = 3;
	testFunPoint(&a, &b);
	return 0;
}

int test() {
	return 1;
}