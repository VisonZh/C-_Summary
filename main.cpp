#include "Inherit_Acesses.h"
#include<iostream>
using namespace std;

template <typename T>int MySizeof(T v)
{
	return (char*)(&v + 1) - (char*)(&v);
}

int main(void) 
{
	BASE b;
	b.m_pb = 1;
	//b.m_pt = 1;//对象无法访问该类的protected成员
	//b.m_pr = 1;//对象无法访问该类的private成员


	PublicChild pbChild;
	pbChild.m_pb = 1;  //public继承，父类的public属性不变，子类对象可以访问public成员
	//pbChild.m_pt = 1;//public继承，父类的protected属性不变，子类对象不可以访问protected成员
	//pbChild.m_pr = 1;//public继承，父类的private属性不变，子类对象不可以访问private成员




	ProtectedChild ptChild;
	//ptChild.m_pb = 1;//protected继承，父类的public属性变为 protected，子类对象不可以访问protected成员
	//ptChild.m_pt = 1;//protected继承，父类的protected属性不变，子类对象不可以访问protected成员
	//ptChild.m_pr = 1;//protected继承，父类的private属性不变，子类对象不可以访问private成员



	PrivateChild prChild;
	//prChild.m_pb = 1;//private继承，父类的public属性变为 private，子类对象不可以访问private成员
	//prChild.m_pt = 1;//private继承，父类的protected属性变为 private，子类对象不可以访问private成员
	//prChild.m_pr = 1;//private继承，父类的private属性变为 private，子类对象不可以访问private成员


	//std::cout << MySizeof(prChild) << std::endl;

	//getchar();
	return 0;
}