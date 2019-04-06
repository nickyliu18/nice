// text1_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#// 3_6q.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include  <iostream>
//#include <cstdlib>
using namespace std;
void game();
int main()
{
	int choice;
	cout << "1(开始)，2（退出），3（中断）：";;
	cin >> choice;
	if (choice == 1) {
		cout << "游戏已经开始";
		game();
	}
	else if (choice == 2)
		cout << "游戏已经退出";

	else if (choice == 3)
		cout << "游戏已经中断";
}
void game()
{
	int chance = 0;
	int answer = 60;
	int num = 0;
	num = 1 + rand() % 100; 
	cout << "开始猜数字游戏，该数字范围在0~100之间:";
	cout << "你的机会只有三次:";
	//unsigned int seed;
	//cout << "Please enter an unsigned integer: ";
	for (chance = 0; chance < 3; chance++)
	{
		cin >> num;
		srand(num);
		//cout << "开始猜数字游戏，请输入你要猜的数:";

		if (num > answer)
		{
			cout << "对不起，你猜的数太大了:" << endl;
		}
		else if (num < answer)
		{
			cout << "对不起，你猜的数太小了:" << endl;
		}
		else if (answer == num)
		{
			cout << "恭喜你，你猜对了:" << endl;
			break;
		}

		else
			cout << "不好意思，你猜错了：";
		if (num != answer && chance == 2)
			cout << "你的机会已经用完了" << endl;

		
	}
	
}


