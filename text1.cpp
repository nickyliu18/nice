 1 
// 身份证.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//65441515
///1541654151
//123456+789
// text4_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
using namespace std;
void main()
{
	//选择身份证类型；

	char choice;
	cout << "菜单:u(15) v(18)" << endl;
	cout << "请选择你的身份证类型";
	cin >> choice;
	switch (choice) {
	case'u': {
		cout << "选择15位身份证类型";

		//验证生日；
		char b[15];
		int i, j;//i是身份证前六位；j是身份证生日部分；
		//int n;//身份证号码；
		cout << "请输出一个身份证号码";
		cin >> b;
		cout << "生日是:";
		for (j = 6; j < 12; j++)
		{
			cout << b[j];
		}
		cout << endl;
		cout << "省份" << b[0] << b[1];
		cout << "市级" << b[2] << b[3];
		cout << "县级" << b[4] << b[5];
		cout << endl;
	
	

		//验证性别
		int f = b[14] - 48;
		if (f % 2 == 0)
			cout << "性别为女";
		else
			cout << "性别为男";
		cout << endl;

		//验证地区
		cout << "地区编码是";
		for (int t = 0; t < 6; t++)
			cout << b[t];
		cout << endl;
		
		//验证顺序码；
		cout << "顺序码是";
		for (int k = 12; k < 15; k++)
			cout << b[k];
		cout << endl;
		
		//15位转18位身份证
		char c[18];// new id card num
		char choice;
		cout << "菜单:s(转)";
		cout << "身份证15位转18位";
		cin >> choice;
		for (int q = 0; q < 6; q++){//q是前面6位地址码
			c[q] = b[q];
			cout << c[q];

		}
		c[6] = b[6], c[7] = b[7];
		cout << c[6] << c[7];

		for (int u = 8;u < 17; u++) {//u后面部分
			c[u] = b[u-2];
			cout << c[u];
		}
		int length = 18;
		int  z = 0, d = 0, sum = 0, check;//d是一位身份证号码乘以系数的和；z是长度；
		int s[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
		//char n{ 0,1,2,3,4,5,6,7.8,9,10 };
		char id[11] = { ' 1','0','X' ,'9','8','7','6','5','4','3','2' };
		for (z = 0; z < length - 1; z++)
		{
			d = (c[z] - 48) * s[z];
			sum += d;
		}
		check = sum % 11;
		c[17] =  id[check];
		cout << c[17];
		


		break;
	}
			 

	case 'v': {
		cout << "选择18位身份证类型";
		//验证生日；
		char a[19];
		int i, j;//i是身份证前六位；j是身份证生日部分；
		//int n;//身份证号码；
		cout << "请输出一个身份证号码";
		cin >> a;
		cout << "生日是:";
		for (j = 6; j <= 13; j++)
		{
			cout << a[j];

		}
		cout << endl;
		cout << "省份" << a[0] << a[1];
		cout << "市级" << a[2] << a[3];
		cout << "县级" << a[4] << a[5];

	
		cout << endl;

		//验证性别
		int f = a[16] - 48;
		if (f % 2 == 0)
			cout << "性别为女";
		else
			cout << "性别为男";
		cout << endl;


		//验证地区
		cout << "地区编码是";
		for (int t = 0; t < 6; t++)
			cout << a[t];
		cout << endl;
		
		cout << endl;

		//验证顺序码；
		cout << "顺序码是";
		for (int k = 14; k < 17; k++)
			cout << a[k];
		cout << endl;

		//判断身份证是否合法；
		int length = 18;
		int  z = 0, d = 0, sum = 0, check;//d是一位身份证号码乘以系数的和；z是长度；
		int s[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
		//char n{ 0,1,2,3,4,5,6,7.8,9,10 };
		char id[11] = { ' 1','0','X' ,'9','8','7','6','5','4','3','2' };
		for (z = 0; z < length - 1; z++)
		{
			d = (a[z] - 48) * s[z];
			sum += d;
		}
		check = sum % 11;
		if (a[17] == id[check])
			cout << "输出此身份证合法的";
		else
			cout << "输出此身份证是黑户";

		char choice;
		cout << "菜单:w(转)";
		cout << "身份证18位转15位";
		cin >> choice;
		for (int h = 0; h < 6; h++) {//h代表前6位
			cout << a[h];
			}
		for (int f = 8; f < 17; f++) {//f后面部分
			cout << a[f]; 
		}

	}
			  
			  break;
	}
}












