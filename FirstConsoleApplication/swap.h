#pragma once

#include<iostream>
using namespace std;

void swap(int a, int b);
void testPoint();
void testPointArray();  //ָ����������е�Ԫ��
void testFunPoint(int* a, int* b); //ָ�봫��
void bubbleSort(int* arr, int len); //ð������
void printArry(int* arr, int len);
void testCite();//����
void swap2(int& a, int& b); //������Ϊ��������

int * test1();  //ָ����Ϊ�����ķ���ֵ
int& returnCite(); //������Ϊ�����ķ���ֵ
void testConstCite(const int& a); //��������