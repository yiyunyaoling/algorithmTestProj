#include "monkeyEatPeaches.h"

MonkeyEatPeaches::MonkeyEatPeaches()
{

}

MonkeyEatPeaches::~MonkeyEatPeaches()
{

}

void MonkeyEatPeaches::judgeDay(int *day)
{
	while (1){
		if (*day < 1){
			cout << "天数必须为正整数，请重新输入：";
			cin >> *day;
		}
		else if (*day > MAXDAY){
			cout << "天数必须小于最大天数" << MAXDAY << ",请重新输入：";
			cin >> *day;
		}
		else{
			break;
		}
	}
}

void MonkeyEatPeaches::computePeaches()
{
	int inputDay;
	long peachNum = 1;

	cout << "本程序是猴子吃桃问题，每天吃一半零1个，到第N天时只剩1个桃子，请问共有多少桃子。" << endl;
	cout << "请输入第几天只剩1个桃子：";
	cin >> inputDay;
	judgeDay(&inputDay);

	for (int i = inputDay; i > 1; i--){
		peachNum = (peachNum + 1) * 2;
	}

	cout << "一共有" << peachNum << "个桃子。" << endl;

}