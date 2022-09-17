#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"
#include "MyInteger.h"

//函数声明
//函数可以声明多次
int test();
int getAgeGloble(Person* person);

class MyClass
{
public:
	int m_a;
	int m_b;
	int m_c;

	MyClass(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {

	}
};


int main() {
	MyInteger myinteger;
	cout << myinteger++ << endl;
	cout << ++(++myinteger) << endl;
	return 0;
}

int test() {
	return 1;
}
