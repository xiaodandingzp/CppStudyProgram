函数的默认参数
---
//函数的默认参数  声明和实现只能一处有默认参数，防止声明和实现的参数默认值不一样
```c++
void add1(int a, int b = 10, int c = 20);
void add1(int a, int b, int c) {
int result = a + b + c;
cout << "result:" << result << endl;
```

```C++
//函数的占位参数 占位参数用来占位 在调用时必须填补该位置, 占位参数也可以设置默认值
void funPar(int a, int, int = 10) {
	cout << "this is funPar" << endl;
}
```

函数重载注意事项
---
```c++
//1，引用作为重载条件
void funOverCite(int& a) {
	cout << "funOverCite(int& a)" << endl;
}
void funOverCite(const int& a) {
	cout << "funOverCite(const int& a)" << endl;
}
funOverCite(10); //调用void funOverCite(const int& a)
int a = 10; 
funOverCite(a); //调用void funOverCite(int& a)

//2,函数重载遇到函数的默认参数 （这个编译器不知道调用哪个函数时会报错）
```
类
---
```c++
//类的定义
class Circle {
    //访问权限
public:

   // 属性
    int m_r;

    double calculateZC() {
        return 2 * 3.14 * m_r;
    }

};
//类的使用
Circle c1;
c1.m_r = 10;
cout << "圆的周长：" << c1.calculateZC() << endl;
```

c++的三大特性
---
>三大特性：封装，继承，多态  
>封装的意义：  
>    将属性和行为作为一个整体，表现生活中的事物  
>    将属性和行为加以权限控制

函数的默认参数
---
```c++
//函数的默认参数  声明和实现只能一处有默认参数，防止声明和实现的参数默认值不一样
void add1(int a, int b = 10, int c = 20);
void add1(int a, int b, int c) {
	int result = a + b + c;
	cout << "result:" << result << endl;
}

//函数的占位参数 占位参数用来占位 在调用时必须填补该位置, 占位参数也可以设置默认值
void funPar(int a, int, int = 10) {
	cout << "this is funPar" << endl;
}
```

函数重载注意事项
---
```c++
//1，引用作为重载条件
void funOverCite(int& a) {
	cout << "funOverCite(int& a)" << endl;
}
void funOverCite(const int& a) {
	cout << "funOverCite(const int& a)" << endl;
}
funOverCite(10); //调用void funOverCite(const int& a)
int a = 10; 
funOverCite(a); //调用void funOverCite(int& a)

//2,函数重载遇到函数的默认参数 （这个编译器不知道调用哪个函数时会报错）
```


构造函数和析构函数
---
>//构造函数：主要用于在对象创建时为对象的成员或者属性赋值，由编译器自动调用，无需手动调用  
//析构函数：主要用在对象销毁前系统调用，执行一些清理工作

拷贝构造函数
---
```c++
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
```

调用构造函数
-
```c++
//括号法
Person p1; //使用默认构造函数时不需要加()
Person p2("zhangping");
Person p3(p2);
//显示法
Person p4;
Person p5 = Person("zhangping");
Person p6 = Person(p5);
Person("zhangping"); //匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
//Person(p2) //注意 不要利用拷贝构造函数初始化匿名对象,编译器会认为等价于Person p3; 而上方已经有一个p3了
//隐式转换法
Person p7 = string("zhangping"); //相当于Person p7 = Person("zhangping")
```
const修饰成员函数
-
```c++
//常函数
    成员函数后加const，我们称之为常函数
    常函数内不能修改成员属性，因为我们在使用属性时，即使没有加this,也是通过 this->属性名 来使用的。this相当于指针常量。常函数相当于给this前加了const.所以this不能改变其指向，也不能改变其指向的值。
    成员属性声明时加关键字mutable后，在常函数中依然可以修改
    
常对象
    声明对象前加const，称该对象为常对象
    常对象只能调用常函数
```
友元
-
```c++
友元的作用是让一个函数或者类访问另一个类中的私有成员
友元的关键字为friend
友元的三种实现
    全局函数做友元
    类做友元
    成员函数做友元
```

继承
---
![继承方式](img/inheritance_way)
```c++
//父类中的所有非静态成员都会被子类继承下去
//父类中私有成员属性是被编译器给隐藏了，因此访问不到，但确实被继承下去了
//查看继承模型
// dl reportSingleClassLayout "xxx.cpp"
```

继承--构造和析构函数的顺序
--
```c++
// MyClassA 继承 MyClass，构造函数和析构函数调用顺序：
 //MyClass的构造函数
 //MyClassA的构造函数
 //MyClassA的析构函数
 //MyClass的析构函数
```

继承---同名成员处理
--
```C++
//1，子类对象可以直接访问到子类中同名成员（属性和方法）
//2，子类加作用域可以访问到父类的同名成员
//格式：son.Base::test() 子类son访问父类Base的test()方法
//3，当子类与父类拥有同名的的成员函数时，子类会隐藏父类中同名成员函数（包裹重载的函数），加作用域可以访问到父类中同名函数。
//比如 父类中有test() test(int a),子类中有test().子类会隐藏父类的test()和test(int a),须加作用域才可以调用到父类的test(int a)
son.Base::test(10)
```
继承---同名静态成员处理
---
```c++
class MyClass
{
public:
	int m_a;
	static int m_static;

	static void testStatic() {
		cout << " MyClass.testStatic " << endl;
	}

	static void testStatic(int a) {
		cout << " MyClass.testStatic(int a) " << endl;
	}

	MyClass() {
		cout << " MyClass的构造函数 " << endl;
	}

	virtual ~MyClass() {
		cout << " MyClass的析构函数 " << endl;
	}
protected:
	int m_b;
private:
	int m_c;

};


//MyClassA的size为16 
// 父类中私有成员属性是被编译器给隐藏了，因此访问不到，但确实被继承下去了
class MyClassA : public MyClass {
public:
	int m_d;
	MyClassA() {
		cout << " MyClassA的构造函数 " << endl;
	}

	~MyClassA() {
		cout << " MyClassA的析构函数 " << endl;
	}

	static void testStatic() {
		cout << " MyClassA.testStatic " << endl;
	}
	string test() {
		m_a = 1;
		m_b = 2;
		//m_c  不可以访问私有属性
		m_d = 4;
	}
};


int main() {
	MyClassA test = MyClassA();
	//通过对象访问
	test.m_static;
	test.testStatic();
	test.MyClass::m_static;
	test.MyClass::testStatic();
	test.MyClass::testStatic(10);
	//通过类去访问
	MyClassA::m_static;
	MyClassA::testStatic();
	MyClassA::MyClass::m_static;
	MyClassA::MyClass::testStatic();
	MyClassA::MyClass::testStatic(10);
	return 0;
}
```
继承---多继承
--
```c++
c++允许一个类继承多个类
语法：class 子类 : 继承方式 父类1, 继承方式 父类2
多继承可能会引发父类中有同名成员出现，需要加作用域区分。
```

继承---菱形继承
---
```C++
定义：
	两个派生类继承同一个基类
	又有某个类同时继承这两个派生类
	这种继承被称为零星继承，或者钻石继承
菱形继承的问题
	羊和驼继承动物 羊驼继承羊和驼
	羊继承了动物的数据，驼也继承了动物的数据，当羊驼使用数据时，就会产生二义性
	羊驼继承自动物的数据继承了两次，其实我们清除，这份数据我们只需要一份就可以

#include<iostream>
using namespace std;
#include "swap.h"
#include <string>
#include "Person.h"
#include "MyInteger.h"

class Animal {
public:
	int m_age;
};

//利用虚继承解决菱形继承的问题
//继承之前加上关键字 virtual 变为虚继承
//Animal为虚基类

class Sheep : virtual public Animal
{
};

class Tuo : virtual public Animal
{
};

class SheepTuo : public Sheep , public Tuo
{
};

void testSheepTuo() {
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 20;
	// 当菱形继承时需要加作用域区分
	cout << "st.Sheep::m_age" << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age" << st.Tuo::m_age << endl;
	//改为虚继承后 可以不区分作用域 因为只有一份数据了
	cout << "st.m_age" << st.Tuo::m_age << endl;
}

int main() {
	cout << "菱形继承" << endl;
	testSheepTuo();
	return 0;
}
```

多态-静态多态和动态多态
--
```C++
多态虚函数的原理分析：c++课程 54类和对象-多态-多态的原理剖析
多态分为两类：
	静态多态：函数重载和运算符重载属于静态多态，复用函数名
	动态多态：派生类和虚函数实现运行时多态
动态多态和静态多态的区别：
	静态多态的函数地址早绑定-编译阶段确定函数地址
	动态多态的函数地址晚绑定-运行阶段确定函数地址
动态多态的满足条件：
	有继承关系
	子类重写父类的虚函数（virtual关键字）（如果重写的不是父类的虚函数，则还是静态多态）
动态多态的使用：
	父类的指针或者引用指向子类对象
```

多态-纯虚函数和抽象类
--
```C++
纯虚函数语法：virtual 返回函数类型 函数名 （参数列表）= 0；
当一个类中有了纯虚函数，这个类就被称为抽象类
抽象类特点：
	无法实例化对象。
	子类必须重写抽象类中的纯虚函数，否则也属于抽象类。
```

多态-虚析构和纯虚析构
---
```C++
多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数
解决方式：将父类中的析构函数改为虚析构或者纯虚析构
虚析构和纯析构的共性：
	可以解决父类指针释放子类对象
	都需要具体的函数实现
虚析构和纯虚析构的区别：
	如果是纯虚析构，该类属于抽象类，无法实例化对象
	父类的纯虚函数也需要实现 父类::~父类(){}[ ]
虚析构语法：virtual ~类名(){}
纯虚析构语法：virtual ~类名() = 0;
```