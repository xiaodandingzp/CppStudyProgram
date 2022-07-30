#include<iostream>
using namespace std;
#include "swap.h"

//函数声明
//函数可以声明多次
int test();

int main() {
	cout << "zhangping is good" << endl;
	int arr[5] = { 4,3,5,2,1 };
	printArry(arr, 5);
	bubbleSort(arr, 5);
	printArry(arr, 5);
	return 0;
}

int test() {
	return 1;
}