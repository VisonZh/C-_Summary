#ifndef __INHERIT_ACESSES_H__
#define __INHERIT_ACESSES_H__

class BASE;

void ChangeValue(BASE & b);

class BASE
{
public:
	int m_pb;
	char m_ch1;
protected:
	int m_pt;
	char m_ch2;
	char m_ch3;
private:
	int m_pr;
	char m_ch4;
public:
	void setValue();
	
	friend void ChangeValue(BASE & b);
};

class PublicChild : public BASE
{
public:
	void setValue();
};

class ProtectedChild : protected BASE
{
public:
	ProtectedChild() {}
	void setValue();
};

class PrivateChild : private BASE
{
public:
	void setValue();
	//virtual void setValue2() {}
};


#endif
