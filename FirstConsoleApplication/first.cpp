#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"

//��������
//���������������
int test();


int main() {
	Person pp = Person("zhangping", 180);
	cout << "name:" << pp.name << endl;

	Person p1;
	Person p2("zhangping", 180); 
	Person p3(p2);

	Person p4;
	Person p5 = Person("zhangping", 180);
	Person p6 = Person(p5);
	p5.setAge(30);
	cout << "p5������" << p5.getAge() << endl;
	Person("zhangping", 179); //�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������

	return 0;
}

int test() {
	return 1;
}
