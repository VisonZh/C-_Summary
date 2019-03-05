#ifndef __MYSIZEOF_H__
#define __MYSIZEOF_H__
#include<iostream>
using namespace std;
template <typename T>int MySizeof(T v)
{
        return (char*)(&v+1) - (char*)(&v);
}
class Base
{
        int num;
        char ch;
        int x;
        //string str;
};

#endif
