#include<iostream>
using namespace std;
#include "swap.h"

//��������
//���������������
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