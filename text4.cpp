// 4_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class point {//类的关键字+类名
public://外部接口
	point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	point(point&p);//复制构造函数
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
private:
	int x, y;
};
//成员函数的实现；
point::point(point&p) {
	x = p.x;
	y = p.y;
	cout << "调用复制构造函数   " << endl;
}
//形参为point类对象的函数：
void fun1(point p) {
	cout << p.getX() << endl;
}
//返回值为point类对象的函数
point fun2() {
	point a(1, 2);
	return a;
}
//主程序
int main() {
	point a(4, 5);
	point b = a;
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;
	return 0;
}
