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
	//b.m_pt = 1;//�����޷����ʸ����protected��Ա
	//b.m_pr = 1;//�����޷����ʸ����private��Ա


	PublicChild pbChild;
	pbChild.m_pb = 1;  //public�̳У������public���Բ��䣬���������Է���public��Ա
	//pbChild.m_pt = 1;//public�̳У������protected���Բ��䣬������󲻿��Է���protected��Ա
	//pbChild.m_pr = 1;//public�̳У������private���Բ��䣬������󲻿��Է���private��Ա




	ProtectedChild ptChild;
	//ptChild.m_pb = 1;//protected�̳У������public���Ա�Ϊ protected��������󲻿��Է���protected��Ա
	//ptChild.m_pt = 1;//protected�̳У������protected���Բ��䣬������󲻿��Է���protected��Ա
	//ptChild.m_pr = 1;//protected�̳У������private���Բ��䣬������󲻿��Է���private��Ա



	PrivateChild prChild;
	//prChild.m_pb = 1;//private�̳У������public���Ա�Ϊ private��������󲻿��Է���private��Ա
	//prChild.m_pt = 1;//private�̳У������protected���Ա�Ϊ private��������󲻿��Է���private��Ա
	//prChild.m_pr = 1;//private�̳У������private���Ա�Ϊ private��������󲻿��Է���private��Ա


	//std::cout << MySizeof(prChild) << std::endl;

	//getchar();
	return 0;
}