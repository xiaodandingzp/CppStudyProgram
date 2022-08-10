#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"

//函数声明
//函数可以声明多次
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
	cout << "p5的年龄" << p5.getAge() << endl;
	Person("zhangping"); //匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象

	Person p7 = string("zhangping"); //相当于Person p7 = Person("zhangping")
	return 0;
}

int test() {
	return 1;
}
