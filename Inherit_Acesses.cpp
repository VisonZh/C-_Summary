#include "Inherit_Acesses.h"

void ChangeValue(BASE & b)
{
	b.m_pb = 1;//��Ԫ�������Է��ʱ����public��Ա
	b.m_pt = 2;//��Ԫ�������Է��ʱ����protected��Ա
	b.m_pr = 3;//��Ԫ�������Է��ʱ����private��Ա
}
void BASE::setValue()
{
	m_pb = 1;//��Ա�������Է��ʱ����public��Ա
	m_pt = 2;//��Ա�������Է��ʱ����protected��Ա
	m_pr = 3;//��Ա�������Է��ʱ����private��Ա
}

void PublicChild::setValue()
{
	m_pb = 1;//public�̳У�����public��Ա���Բ���							
	m_pt = 2;//public�̳У�����protected��Ա���Բ���					
  //m_pr = 3;//public�̳У�����private��Ա���Բ���	   �����Ա����  ������  ���ʱ����private��Ա
}

void ProtectedChild::setValue()
{
	m_pb = 1;//protected�̳У�����public��Ա���Բ���							
	m_pt = 2;//protected�̳У�����protected��Ա���Բ���					
  //m_pr = 3;//protected�̳У�����private��Ա���Բ���	   
}

void PrivateChild::setValue()
{
	m_pb = 1;//private�̳У�����public��Ա���Ա�Ϊ 	private						
	m_pt = 2;//private�̳У�����protected��Ա���Ա�Ϊ	private				
  //m_pr = 3;//private�̳У�����private��Ա���Ա�Ϊ	  private  ��  ������������Ա�����޷����ʸ�˽�г�Ա
}
