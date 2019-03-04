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
int main(void)
{
        int a = 0;
        Base b;
        std::cout << sizeof(a) << std::endl ;
        std::cout << MySizeof(a) << std::endl;
        std::cout << sizeof(b) << std::endl ;
        std::cout << MySizeof(b) << std::endl;
        return 0;
}
