#include "swap.h"
using namespace std;
#include "Person.h"

string Person::toString() {
	return Person::name;
}

Person::Person() {
	cout << "�޲ι��캯��" << endl;
}

Person::Person(string name) {
	this->name = name;
	cout << "�вι��캯��" << endl;
}

Person::Person(const Person & p) {
	name = p.name;
	cout << "�������캯��" << endl;
}

Person::~Person() {
	cout << "��������" << endl;
}