#include "Inherit_Acesses.h"

void ChangeValue(BASE & b)
{
	b.m_pb = 1;//友元函数可以访问本类的public成员
	b.m_pt = 2;//友元函数可以访问本类的protected成员
	b.m_pr = 3;//友元函数可以访问本类的private成员
}
void BASE::setValue()
{
	m_pb = 1;//成员函数可以访问本类的public成员
	m_pt = 2;//成员函数可以访问本类的protected成员
	m_pr = 3;//成员函数可以访问本类的private成员
}

void PublicChild::setValue()
{
	m_pb = 1;//public继承，父类public成员属性不变							
	m_pt = 2;//public继承，父类protected成员属性不变					
  //m_pr = 3;//public继承，父类private成员属性不变	   子类成员函数  不可以  访问本类的private成员
}

void ProtectedChild::setValue()
{
	m_pb = 1;//protected继承，父类public成员属性不变							
	m_pt = 2;//protected继承，父类protected成员属性不变					
  //m_pr = 3;//protected继承，父类private成员属性不变	   
}

void PrivateChild::setValue()
{
	m_pb = 1;//private继承，父类public成员属性变为 	private						
	m_pt = 2;//private继承，父类protected成员属性变为	private				
  //m_pr = 3;//private继承，父类private成员属性变为	  private  ，  子类对象，子类成员函数无法访问该私有成员
}
