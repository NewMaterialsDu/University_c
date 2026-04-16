
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

//4类和对象
    //4.1封装
//设置一个圆类，求圆的周长
//圆的周长公式 ： 2 * PI * 半径

//圆周率
const double PI = 3.1415926;

//设计一个类
class yuan {
    //访问权限
public://公共权限
    //属性
    //半径
    int r;

    //行为（通常是一个函数）
    //获取圆的周长
    double calculate() {
        return 2 * PI * r;
    }


};



int main()
{
   //4类和对象
    //4.1封装

    //通过圆类创建具体的圆（对象）
    yuan c1;
    //给圆对象的属性赋值
    c1.r = 10;
    cout << "圆c1的周长为：" << c1.calculate() << endl;


    return 0;
}
