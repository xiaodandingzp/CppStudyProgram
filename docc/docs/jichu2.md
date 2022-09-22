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