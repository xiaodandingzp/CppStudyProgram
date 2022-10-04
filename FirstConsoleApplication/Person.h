#pragma once

#ifndef PERSON_H
#define PERSON_H

/*
* ����ָʾ��#ifndef���Ԥ���볣����ǰ���Ƿ��Ѿ����궨�塣
* �����ǰ��û�б��궨��,������ָʾ����ֵΪ�棬���Ǵ�#ifndef��#endif֮���������䶼�������������б��봦��
* �෴�����#ifndefָʾ����ֵΪ�٣�������#endifָʾ��֮����н������ԡ�
* ����ָʾ��#ifndef ������ҪĿ���Ƿ�ֹͷ�ļ����ظ������ͱ��롣
*/

#include<iostream>
using namespace std;

class GoodFriend {
public:
	int getOtherPersonAge();
};

class GoodFriend1 {
public:
	int getOtherPersonAge11();
};

class Person {
	friend int getAgeGloble(Person* person);
	friend class GoodFriend;
	friend int GoodFriend1::getOtherPersonAge11();

public:
	string name;

	string toString();

	Person();

	Person(string name, int height);

	Person(const Person& p);

	Person operator+ (Person& p1);

	void setAge(int a);

	int getAge();

	~Person();

private:
	int age;
	int* height;
};

class Boy : public Person {
public:
	int sex = 0;
	int GetSxe();
};

#endif