#include<iostream>
using namespace std;
#include "swap.h"
#include <string>

//��������
//���������������
int test();
class Person {
public:
	string name;
	Person(string name) {
		this->name = name;
	}

	~Person() {
		cout << "��������" << endl;
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
