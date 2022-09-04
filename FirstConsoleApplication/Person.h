#pragma once

#ifndef PERSON_H
#define PERSON_H

/*
* 条件指示符#ifndef检查预编译常量在前面是否已经被宏定义。
* 如果在前面没有被宏定义,则条件指示符的值为真，于是从#ifndef到#endif之间的所有语句都被包含进来进行编译处理。
* 相反，如果#ifndef指示符的值为假，则它与#endif指示符之间的行将被忽略。
* 条件指示符#ifndef 的最主要目的是防止头文件的重复包含和编译。
*/

#include<iostream>
using namespace std;

class Person {
	friend int getAgeGloble(Person* person);
public:
	string name;

	string toString();

	Person();

	Person(string name);

	Person(const Person& p);

	void setAge(int a);

	int getAge();

	~Person();

private:
	int age;
};

#endif