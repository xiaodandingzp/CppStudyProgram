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

	Person() {
		cout << "�޲ι��캯��" << endl;
	}

	Person(string name) {
		this->name = name;
		cout << "�вι��캯��" << endl;
	}

	Person(const Person & p) {
		name = p.name;
		cout << "�������캯��" << endl;
	}

	~Person() {
		cout << "��������" << endl;
	}
};


int main() {
	Person pp = Person("zhangping");
	cout << "name:" << pp.name << endl;

	Person p1;
	Person p2("zhangping"); 
	Person p3(p2);

	Person p4;
	Person p5 = Person("zhangping");
	Person p6 = Person(p5);
	Person("zhangping"); //�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������

	Person p7 = string("zhangping"); //�൱��Person p7 = Person("zhangping")
	return 0;
}

int test() {
	return 1;
}
