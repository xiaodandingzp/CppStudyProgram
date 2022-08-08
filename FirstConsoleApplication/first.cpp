#include<iostream>
using namespace std;
#include "swap.h"
#include <string>

//函数声明
//函数可以声明多次
int test();
class Person {
public:
	string name;
	Person(string name) {
		this->name = name;
	}

	~Person() {
		cout << "析构函数" << endl;
	}
};


int main() {
	Person pp = Person("zhangping");
	cout << "name:" << pp.name << endl;
	return 0;
}

int test() {
	return 1;
}
