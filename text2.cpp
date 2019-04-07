// 时钟类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class clock {
public:
	//clock (int shi, int fen, int miao);
	void  setTime(int shi, int fen, int miao);
	void showTime();
private:
	int hour, minute, second;
};

void clock::setTime(int shi, int fen, int miao) {
	hour = shi;
	minute = fen; 
	second = miao;
}

void  clock::showTime() {
	cout << hour << "  :" << minute << "  :" << second << endl;
}

int main() {
	clock mycloc;
	myclock.setTime(8, 30, 20);
	myclock.showTime();
	return 0;
}
