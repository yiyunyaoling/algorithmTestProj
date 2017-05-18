#include "YTD.h"

YTD::YTD()
{

}

YTD::~YTD()
{

}

void YTD::judgeYTD(int *year, int *month, int *day)
{
	while (1){
		if (*year < 0 || *year > 3000){
			cout << "年份必须在0到3000之间，请重新输入年份：";
			cin >> *year;
		}
		else if (*month <1 || *month > 12){
			cout << "月份必须在1到12月之间，请重新输入月份：";
			cin >> *month;
		}
		else if (*day < 1 || *day > 31){
			cout << "日必须在1到31号之间，请重新输入日子：";
			cin >> *day;
		}
		else{
			break;
		}
	}
}

void YTD::computeYTD()
{
	int year, month, day;
	int dataNum;
	int sum, leap;

	cout << "本程序是输入年月日，然后计算是这一年的第几天。" << endl;
	cout << "请输入年份：";
	cin >> year;
	cout << "请输入月份：";
	cin >> month;
	cout << "请输入日子：";
	cin >> day;

	judgeYTD(&year, &month, &day);

	switch (month){
	case 1: sum = 0; break;
	case 2: sum = 31; break;
	case 3: sum = 59; break;
	case 4: sum = 90; break;
	case 5: sum = 120; break;
	case 6: sum = 151; break;
	case 7: sum = 181; break;
	case 8: sum = 212; break;
	case 9: sum = 243; break;
	case 10: sum = 273; break;
	case 11: sum = 304; break;
	case 12: sum = 334; break;
	}
	sum += day;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
		leap = 1;
	}
	else{
		leap = 0;
	}

	if (month > 2 && leap == 1){
		dataNum = sum + 1;
	}
	else{
		dataNum = sum;
	}
	if (leap == 1){
		cout <<year<<"年是润年，该日期是" << year << "年的第" << dataNum << "天。" << endl;
	}
	else{
		cout << year << "年是平年，该日期是" << year << "年的第" << dataNum << "天。" << endl;
	}
	

}