#include "swap.h"
using namespace std;
#include "Person.h"

string Person::toString() {
	return Person::name;
}

Person::Person() {
	cout << "无参构造函数" << endl;
}

Person::Person(string name) {
	this->name = name;
	cout << "有参构造函数" << endl;
}

Person::Person(const Person & p) {
	name = p.name;
	cout << "拷贝构造函数" << endl;
}

Person::~Person() {
	cout << "析构函数" << endl;
}