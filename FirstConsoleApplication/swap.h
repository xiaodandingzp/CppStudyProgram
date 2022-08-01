#pragma once

#include<iostream>
using namespace std;

void swap(int a, int b);
void testPoint();
void testPointArray();  //指针访问数组中的元素
void testFunPoint(int* a, int* b); //指针传递
void bubbleSort(int* arr, int len); //冒泡排序
void printArry(int* arr, int len);
void testCite();//引用
void swap2(int& a, int& b); //引用作为函数参数

int * test1();
int& returnCite();