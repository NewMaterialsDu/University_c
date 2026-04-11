
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

//2.3
//交换函数
//1.值传递
void myswap01(int a,int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;

}

//2.地址传递
void myswap02(int* a, int* b) {
    int temp = *a;
    * a = *b;
    *b = temp;


}
//3.引用传递
void myswap03(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    //2.1引用的基本使用
    //作用：给变量起别名
    //语法：数据类型 &别名 = 原名
    int a = 10;
    int& b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //2.2引用的注意事项
    //1.引用必须要初始化
    //int& b; 错误的

    //2.引用一但初始化后，就可以更改了
    int c = 20;

    b = c;//赋值操作，而不是更改引用
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    //int& b = c  会报错：重新定义，多次初始化

    //2.3引用做函数的参数
    //利用引用的技术让形参修饰实参
    //可以简化指针修改实参
    int a1 = 10;
    int b1 = 20;

    //myswap01(a, b);//值传递，形参不会改变实参

    //myswap02(&a1, &b1); //地址传递，形参会修饰实参

    //myswap03(a1,b1);//引用传递，实参会修饰实参



    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;




    return 0;
}
