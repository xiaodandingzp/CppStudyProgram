#include "swap.h"
using namespace std;
#include "Person.h"

//如果属性有在堆区开辟的，一定要自己提供构造函数，防止浅拷贝带来的问题。

string Person::toString() {
	return Person::name;
}

Person::Person() {
	cout << "无参构造函数" << endl;
}

Person::Person(string name, int height) {
	this->name = name;
	this->height = new int(height); //在堆区开辟了内存空间
	cout << "有参构造函数" << endl;
}

//自己实现拷贝函数 解决浅拷贝带来的问题。默认的拷贝函数是浅拷贝(地址值的复制) height = p.height
Person::Person(const Person & p) {
	name = p.name;
	height = new int(*(p.height));//深拷贝，在堆区开辟新的内存空间
	age = p.age;
	cout << "拷贝构造函数" << endl;
}

Person::~Person() {
	cout << "析构函数" << endl;
	//析构代码，将堆区开辟的数据做释放操作
	if (height != NULL) {
		delete height;
		height = NULL;
	}
}

//运算符重载 运算符重载也可以发生函数重载
//对于内置的数据类型的表达式的运算符是不能改变的
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

//类做友元
int GoodFriend::getOtherPersonAge() {
	Person person = Person("zp", 160);
	person.setAge(18);
	return person.age;
}

//成员函数做友元
int GoodFriend1::getOtherPersonAge11() {
	Person person = Person("zp", 160);
	person.setAge(18);
	return person.age;
}

int Boy::GetSxe() {
	return this->sex;
}