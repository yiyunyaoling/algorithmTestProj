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
			cout << "��ݱ�����0��3000֮�䣬������������ݣ�";
			cin >> *year;
		}
		else if (*month <1 || *month > 12){
			cout << "�·ݱ�����1��12��֮�䣬�����������·ݣ�";
			cin >> *month;
		}
		else if (*day < 1 || *day > 31){
			cout << "�ձ�����1��31��֮�䣬�������������ӣ�";
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

	cout << "�����������������գ�Ȼ���������һ��ĵڼ��졣" << endl;
	cout << "��������ݣ�";
	cin >> year;
	cout << "�������·ݣ�";
	cin >> month;
	cout << "���������ӣ�";
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
		cout <<year<<"�������꣬��������" << year << "��ĵ�" << dataNum << "�졣" << endl;
	}
	else{
		cout << year << "����ƽ�꣬��������" << year << "��ĵ�" << dataNum << "�졣" << endl;
	}
	

}