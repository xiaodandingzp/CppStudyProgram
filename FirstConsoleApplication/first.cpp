#include<iostream>
using namespace std;
#include "swap.h"

//��������
//���������������
int test();

int main() {
	cout << "zhangping is good" << endl;
	int testa = test();
	cout << testa << endl;
	swap(10, 20);
	testPoint();
	testPointArray();
	return 0;
}

int test() {
	return 1;
}