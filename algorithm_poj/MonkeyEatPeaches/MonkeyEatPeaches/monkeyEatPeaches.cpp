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
			cout << "��������Ϊ�����������������룺";
			cin >> *day;
		}
		else if (*day > MAXDAY){
			cout << "��������С���������" << MAXDAY << ",���������룺";
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

	cout << "�������Ǻ��ӳ������⣬ÿ���һ����1��������N��ʱֻʣ1�����ӣ����ʹ��ж������ӡ�" << endl;
	cout << "������ڼ���ֻʣ1�����ӣ�";
	cin >> inputDay;
	judgeDay(&inputDay);

	for (int i = inputDay; i > 1; i--){
		peachNum = (peachNum + 1) * 2;
	}

	cout << "һ����" << peachNum << "�����ӡ�" << endl;

}