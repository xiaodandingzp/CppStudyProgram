#include "swap.h"
using namespace std;
#include "Person.h"

//����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ���캯������ֹǳ�������������⡣

string Person::toString() {
	return Person::name;
}

Person::Person() {
	cout << "�޲ι��캯��" << endl;
}

Person::Person(string name, int height) {
	this->name = name;
	this->height = new int(height); //�ڶ����������ڴ�ռ�
	cout << "�вι��캯��" << endl;
}

//�Լ�ʵ�ֿ������� ���ǳ�������������⡣Ĭ�ϵĿ���������ǳ����(��ֵַ�ĸ���) height = p.height
Person::Person(const Person & p) {
	name = p.name;
	height = new int(*(p.height));//������ڶ��������µ��ڴ�ռ�
	age = p.age;
	cout << "�������캯��" << endl;
}

Person::~Person() {
	cout << "��������" << endl;
	//�������룬���������ٵ��������ͷŲ���
	if (height != NULL) {
		delete height;
		height = NULL;
	}
}

//��������� ���������Ҳ���Է�����������
Person Person::operator+ (Person& p1) {
	Person temp = Person("zppp", 180);
	temp.setAge(p1.age + this->age);
	return temp;
}

void Person::setAge(int a) {
	this->age = a;
}

int Person::getAge() {
	return this->age;
}

int getAgeGloble(Person * person) {
	return person->age;
}

//������Ԫ
int GoodFriend::getOtherPersonAge() {
	Person person = Person("zp", 160);
	person.setAge(18);
	return person.age;
}

//��Ա��������Ԫ
int GoodFriend1::getOtherPersonAge11() {
	Person person = Person("zp", 160);
	person.setAge(18);
	return person.age;
}