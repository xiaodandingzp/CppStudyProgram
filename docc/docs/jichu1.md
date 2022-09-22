1，数据类型
-
>int 四个字节  
>boolean  
>指针：32位系统4个字节、64位系统8个字节


访问权限
-- 
```c++
//公共权限 public 类内可以访问 类外可以访问
//保护权限 protected 类内可以访问 类外不可以访问 子类可以访问
//私有权限 private 类内可以访问 类外不可以访问 子类不可以访问
//在c++中，struct和class的唯一区别就在于默认的访问权限不同。struct默认权限为公共，class的默认权限为私有
class Circle {
    //访问权限
public:

   // 属性
    int m_r;

    double calculateZC() {
        return 2 * 3.14 * m_r;
    }

protected:
    int test1 = 10;

private:
    int test_prvate = 20;

};
```

3，函数参数传递方式
--
```c++
//值传递  传递的是变量a和b的值
void fun1(int a, int b)
int a = 0;
int b = 1;
fun1(a, b)
//指针传递  传递的是变量a和b的地址
void fun2(int *a, int *b)
int a = 0;
int b = 1;
fun2(&a, &b)
```

2，数组
--
```c++
数据类型 数组名[行数];
数据类型 数组名[行数] = {数据1, 数据2}
int arr[3] = {1,2,3}
//数组名可以获取数组的首地址
cout << "数组首地址为：" << (int)arr << endl;
cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
```

3，二维数组
--
```c++
数据类型 数组名[行数][列数];
数据类型 数组名[行数][列数] = {{数据1, 数据2}, {数据3, 数据4}}
数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据3}
//二维数组的数组名：查看二维数组所占空间、获取二维数组首地址
int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}
cout << "二维数组占用内存空间：" << sizeof(arr) << endl
cout << "二维数组第一行占用内存" << sizeof(arr[0]) << endl
cout << "二维数组第一个元素占用内存" << sizeof(arr[0][0]) << endl

cout << "二维数组行数" << sizeof(arr) / sizeof(arr[0]) << endl
cout << "二维数组列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl

cout << "二维数组首地址" << (int)arr / sizeof(arr[0]) << endl
cout << "二维数第一行首地址" << (int)arr[0] / sizeof(arr[0][0]) << endl
```

4，函数
--
```c++
//函数声明,函数可以声明多次，但只能定义一次
// 返回类型 函数名(参数);
int test();
```

 函数的分文件编写
---
1、创建后缀名为swap.h的文件
---
```c++
#include<iostream>
using namespace std;
void swap(int a, int b);  //在头文件里写函数声明
```

2、创建后缀名为awap.cpp的文件
---
```c++
#include "swap.h"
//在源文件中写函数的定义
void swap(int a, int b) {  
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
```

3、使用的地方添加声明：
---
```c++
#include "swap.h"
```

指针
---
```c++
//指针的定义
//数据类型 * 指针变量名;
int a = 10
int * p = &a; //指针p的值是变量a的地址,&取址操作符
cout << "a的指针为：" << &a << endl
cout << "指针p为：" << p << endl

//指针的使用
//可以通过解引用的方式来找到指针指向的内存
//指针前加*代表解引用，找到指针指向的内存值
*p
```

空指针
---
```c++
//指针变量指向内存中编号位0的空间
//用途：初始化指针变量.0-255之间的内存编号是系统占用的，因此不能访问
//注意：空指针指向的内存是不可以访问的
int *p = NULL;
```


野指针
---
```c++
//指针变量指向非法的内存空间
//访问野指针会报错
int *p = (int*)0x1100
```

const修饰指针
---
```c++
//const修饰指针  --常量指针 指针指向可以改，指针指向的值不可以改
const int *p1 = &a
p1 = &b //正确
*p1 = 100 //报错
//const修饰常量  --指针常量 指针指向不可以改，指针指向的值可以改
int *const p2 = &a
p2 = &b //错误
*p2 = 100 //正确
//const即修饰指针，又修饰常量 --指针的指向不可以修改，指针指向的值也不可以修改
```

指针和数组
---
```c++
//利用指针访问数组中的元素
void testPointArray() {
	int arr[5] = { 0, 1, 2, 3, 4 };
	cout << "数组的第一个元素" << arr[0] << endl;
	int* p = arr;
	cout << "利用指针访问第一个元素" << *p << endl;
	p++; //让指针向后偏移4个字节
	cout << "利用指针访问第二个元素" << *p << endl;
	cout << "利用指针访问第三个元素" << *(p + 1) << endl;
	//利用指针访问数组
	int* p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << *p2 << endl;
		p2++;
	}
}
```

指针和函数
---
```c++
//指针与函数  指针传递 地址传递.外部的a,b的值会被改变
void testFunPoint(int *a, int *b){
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
}
```

结构体
---
```c++
//结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
//结构体的定义和使用
//语法：struct 结构体名 {结构体成员列表}
//使用
//		struct 结构体名 变量名
//		struct 结构体名 变量名 = {}
//     定义结构体的时候顺便创建变量
//定义
struct Student {
    string name;
    int age;
    int score;
};
//使用
    struct Student s1;
    s1.name = "zhangping";
    s1.age = 18;
    s1.score = 100;
    cout << "s1.name:" << s1.name << " s1.age:" << s1.age << " s1.score:" << s1.score << endl;

    struct Student s2 = { "zhangping2", 19, 99 };
    cout << "s2.name:" << s2.name << " s2.age:" << s2.age << " s2.score:" << s2.score << endl;
```

结构体数组
---
```c++
//将自定义的结构体放入到数组中方便维护
struct Student arr[3] = {
    {"张三", 18, 100},
    {"李四", 19, 99},
    {"王五", 20, 98}
};
arr[2].name = "赵六";
```

结构体指针
---
```c++
Student s = {"张三", 18, 100};
Student *p = &s;
cout << "name:" << p->name << " age:" << p->age << " score:" << p->score << endl;
```

const
---
```c++
//值传递 会复制一份数据，占用太多内存
//地址传递 可以减少内存空间（指针传递值传递地址，地址占用的空间比较少（4个字节或者8个字节）），但是对数据的修改也会使原数据修改。加const后，不允许对数据进行修改，只可读。
void printStudents(const student *s)
```

内存分块模型
---
```c++
//C++在执行程序时，将内存分为4个区域
//代码区：存放函数体的二进制代码，由操作系统进行管理的
//全局区：存放全局变量和静态变量以及常量
//栈区：由编译器自动分配释放，存放函数的参数值，局部变量
//堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
```

程序运行前的内存
---
>在程序编译后，生成了exe可执行文件，未执行该程序前分为两个区  
代码区：  
	存放cpu执行的机器指令  
    代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可  
    代码区是只读的，使其只读的原因是防止程序意外地修改了它地指令  
全局区：  
    全局变量和静态变量存放在此  
    全局区还包含了常量区，字符串常量和其他常量也存放在此  
    该区域地数据在程序结束后由操作系统释放  
    静态变量： static int s_a = 10;  
    常量：字符常量 "zhangping"    
    const修饰地全局常量：const int c_a = 10;  
    const修饰地局部常量在栈区  

程序运行后地内存
--
>栈区地注意事项：  
    不要返回局部变量地地址，栈区地数据由编译器管理开辟和释放地，栈区数据在函数执行完后自动释放
```c++
//不能用引用或指针去接收函数返回的局部变量的指针和引用 因为局部变量在函数执行结束时就被销毁了
int & test1() {
	int a = 10;
	return a;
}
int &b = test1() //不可以，因为b指向a的地址，但a所在内存的值别销毁了
int b = test1() //可以 返回的a的被被赋予b.
int * test1() {
	int a = 10;
	return &a;
}
int *b = test1() //不可以，返回a的指针，但a被销毁了
//堆区：在C++中主要利用new在堆区开辟内存
    int *p = new int(10);
```

new操作符
--
```c++
//C++利用new操作符在堆区开辟数据,new返回地是 该数据类型地指针
//堆区开辟地数据，由程序员手动开辟，手动释放，释放利用操作符delete
int *p = new int(10);
delete p;
//new 数组
int *arr = new int[10];
delete[] arr
```

引用
---
```c++
//是给变量起别名 ,本质是指针常量
void testCite() {
	int a = 100;
	cout << "a:" << a << endl;
	int& b = a;
	b = 200;
	cout << "b:" << b << endl;
	cout << "a:" << a << endl;
}
//引用必须要初始化，且初始化后不能更改
// 引用传递  形参修饰实参 a,b改变时，外部的a,b的值也会改变
//通过引用参数产生的效果和按地址传递是一样的，引用的语法更简单
void swap2(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//引用作为函数的返回值
int& returnCite() {
	int a = 10;
	return a;
}
//int &b = returnCite()  //不可以，因为a在函数执行结束时被销毁了，b指向的内存的值不在了
// returnCite() = 100    //可以，a指向的内存被重新赋值为100

//常量引用 主要用来修饰形参，防止改变实参的值
void testConstCite(const int &a) {
	cont << "a:" << a << endl;
}
```