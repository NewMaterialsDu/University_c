
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

//4.3.1成员变量和成员函数分开存储
//c++中类内的成员变量和成员函数分开储存
//只有非静态成员变量才属于类的对象上
//class person {
//
//    //非静态成员变量  属于类的对象上
//    int m_a;
//
//    //静态成员变量  不属于类的对象上
//    static int m_b;
//
//    //非静态成员函数  不属于类的对象上
//    void func() {
//
//    }
//
//    //静态成员函数  不属于类的对象上
//    static void func2() {
//
//    }
//
//};
//int person::m_b = 0;
//void test01() {
//    person p;
//    //c++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占用内存的位置，每个空对象也应该有一个独一无二的内存地址
//    cout << "size of p=" << sizeof(p) << endl;
//}
//
//void test02() {
//    person p2;
//    cout << "size of p2=" << sizeof(p2) << endl;
//
//}

//4.3.2this指针概念



int main()
{
    //4.3.1
    //test01();
    //test02();

    //4.3.2



    system("pause");
    return 0;
}
