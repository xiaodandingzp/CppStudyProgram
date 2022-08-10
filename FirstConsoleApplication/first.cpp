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

	Person() {
		cout << "无参构造函数" << endl;
	}

	Person(string name) {
		this->name = name;
		cout << "有参构造函数" << endl;
	}

	Person(const Person & p) {
		name = p.name;
		cout << "拷贝构造函数" << endl;
	}

	~Person() {
		cout << "析构函数" << endl;
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
	Person("zhangping"); //匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象

	Person p7 = string("zhangping"); //相当于Person p7 = Person("zhangping")
	return 0;
}

int test() {
	return 1;
}
