
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;
//4.2对象的初始化和清理
//4.2.1构造函数和析构函数
//class person {
////1.构造函数进行初始化操作
////构造函数语法：类名（）{ }
////1.构造函数没有返回值，也不写void
////2.函数名称与类名相同
////3.构造函数可以有参数，所以可以发生函数重载
////4.程序在调用对象时会自动调用构造，无需手动调用，而且只会调用一次
//    //4.2.2构造函数的分类及调用
////按参数为有参和无参(默认构造)
//public:
//person() {
//    cout << "person无参构造函数的调用" << endl;
//}
//person(int a) {
//    age = a;
//    cout << "person有参构造函数的调用" << endl;
//}
////按类型为普通和拷贝
////拷贝
//person(const person& p) {
// //将传入的人的身上的所有属性，拷贝到我身上
//    age = p.age;
//    cout << "person拷贝构造函数的调用" << endl;
//}
////2.析构函数进行清理操作
////析构函数语法： ~类名（）{ }
////1.析构函数没有返回值也不写void
////2.函数名称与类名相同，在名称前加上符号 ~
////3.析构函数不可以有参数，因此不能发生重载
////4.程序在对象销毁前会自动调用析构，无需手动调用而且只会调用一次
//~person(){
//    cout << "person析构函数的调用" << endl;
//}
//int age;
//};

//构造和析构都是必须有的实现，如果自己不提供，编译器会提供一个空的构造和析构
//void test01() {
    ////在栈上的数据，test01（）执行完毕后，释放这个对象（释放前会调用析构函数）
    //person p1;//默认构造函数调用
    ////调用
    ////括号法
    //person p2(10);//有参构造函数
    //person p3(p2);//拷贝构造函数
    ////注意：调用默认构造函数时不要加小括号
    ////因为编译器会认为是一个函数的声明，不会认为在创建对象
    ////person p4();
    //cout << "p2的年龄是：" << p2.age << endl;
    //cout << "p3的年龄是：" << p3.age << endl;
    ////显示法
    //person p4;
    //person p5 = person(20);//有参函数
    //person p6 = person(p5);//拷贝构造
    //person(20);//匿名对象 特点：当前执行结束后，系统会立即回收匿名对象
    //cout << "aaaa" << endl;
    ////不要利用拷贝构造函数 初始化对象
    ////person(p6);//执行会报错 编译器会认为 person(p6) === person p6;//重定义了,认为是对象的声明
    ////隐式转换法
    //person p7 = 30;//相当于 person p7 = person(30); //有参构造
    //person p8 = p7;//拷贝构造
//}

class person {
public:
    person() {
        cout << "无参构造函数！" << endl;
    }
    person(int age) {
        cout << "有参构造函数！" << endl;
        mage = age;
    }
    person(const person& p) {
        cout << "拷贝构造函数!" << endl;
        mage = p.mage;
    }
    //析构函数在释放内存之前调用
    ~person() {
        cout << "析构函数！" << endl;
    }
public:
    int mage;
};
void test02() {
    //4.2.3拷贝构造函数的调用时机
    //1.*使用一个已经创建完毕的对象来初始化一个新对象
    person p1(20);
    person p2(p1);
    cout << "p2的年龄为：" << p2.mage << endl;
}

//2.* 值传递的方式给函数参数传值
void test04(person p3) {
    //值传递就算改p3也不影响原来的值
}
void test03() {
    person p3;
    test04(p3);
}
 //3.* 以值方式返回局部对象
person test05() {
    person p4;
    //返回的并不是原来的p4，而是一个新的对象
    cout << (int*)&p4 <<endl;
    return p4;
}
void test06() {
    person p5 = test05();
    cout << (int*)&p5 << endl;

}


int main()
{
//4.2
//4.2.1
    //test01();
    //person p1;//主函数没有执行完，所以不会调用析构

    //4.2.3
    //test02();
    //test03();
    test06();








    system("pause");
    return 0;
}
