#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"

//��������
//���������������
int test();


int main() {
	Person pp = Person("zhangping");
	cout << "name:" << pp.name << endl;

	Person p1;
	Person p2("zhangping"); 
	Person p3(p2);

	Person p4;
	Person p5 = Person("zhangping");
	Person p6 = Person(p5);
	p5.setAge(30);
	cout << "p5������" << p5.getAge() << endl;
	Person("zhangping"); //�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������

	Person p7 = string("zhangping"); //�൱��Person p7 = Person("zhangping")
	return 0;
}

int test() {
	return 1;
}
