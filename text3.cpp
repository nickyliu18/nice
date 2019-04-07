// text3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h" 
#include <iostream>
#include <cmath> 
using namespace std;
void main()
{
	char choice;
	while (1)
	{
		cout << "菜单：1(二转十) 2（二转八） 3（八转十） 4（十转二） 5（十转八） 6（八转二）";
		cin >> choice;
		switch (choice)
		{
		case'1':
			cout << "二进制转十进制";
			break;
		case'2':
			cout << "二进制转八进制";
			break;
		case'3':
			cout << "八进制转十进制";
			break;
		case'4':
			cout << "十进制转二进制";
			break;
		case'5':
			cout << "十进制转八进制";
			break;
		case'6':
			cout << "八进制转二进制";
			break;
		}


		int a, b = 0, c = 0, d;//a(数字)，d(余数),c(幂指数),b(十进制的值)
		cout << "请输入一个二进制数：";
		cin >> a;
		while (a != 0)//数字不能全部为0；
		{
			d = a % 10;//(取余）
			a = a / 10;//（取整）
			b += d * pow(2, c++);//2的C++次方；

		}
		cout << "对应十进制为： ";
		cout << b << endl;


		int e, f, g = 0, l = 0;//e(数字)，f(余数),g(幂指数),l(八进制的值)
		cout << "请输入一个二进制数：";
		cin >> e;
		while (e != 0) {
			f = e % 8;
			e = e / 8;
			l = f * pow(2, g++);
		}
		cout << "对应的八进制为:";
		cout << l << endl;

		int m, n, k = 0, j = 0;//m(数字)，n(余数),k(幂指数),j(十进制的值)；
		cout << "请输入一个八进制数：";
		cin >> m;
		while (m != 0) {
			n = m % 10;
			m = m / 10;
			j = n * (8, k++);
		}
		cout << "对应的十进制为:";
		cout << j << endl;


		int s, h, z = 0;//s(数字)，h(八进制)，z(余数)；
		int nb[100];
		cout << "请输入一个十进制数:";
		cin >> s;
		while (s != 0) {
			nb[z] = s % 8;
			s = s / 8;
			z++;
		}
		cout << "对应的八进制为:";

		for (h = z - 1; h >= 0; h--) {//[7]有数字在0~7之间；
			cout << nb[h];
		}
		cout << endl;

		int A, B, C = 0; // A(数字)，B(二进制)，C(余数)；
		int jb[100];
		cout << "请输入一个十进制:";
		cin >> A;
		while (A != 0) {
			jb[C] = A % 2;
			A = A / 2;
			C++;
		}
		cout << "对应的二进制为：";

		for (B = C - 1; B >= 0; B--) {
			cout << jb[B];
		}
		cout << endl;



		int D, F, G = 0;// D(数字)，F(二进制)，G(余数)；
		int nm[100];
		cout << "请输入一个八进制:";
		cin >> D;
		while (D != 0) {
			nm[G] = D % 2;
			D = D / 2;
			G++;
		}
		cout << "对应的二进制:" << endl;

		for (F = G - 1; F >= 0; F--) {
			cout << nm[F];
		}
		cout << endl;
		return;
	}
}

