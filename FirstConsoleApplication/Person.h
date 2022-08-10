#pragma once

#include<iostream>
using namespace std;
class Person {
public:
	string name;

	string toString();

	Person();

	Person(string name);

	Person(const Person& p);

	~Person();
};
