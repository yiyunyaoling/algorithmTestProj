
#include "repeatAddition.h"

#include <iostream>


using namespace std;

RepeatAddition::RepeatAddition()
{
}

RepeatAddition::~RepeatAddition()
{
}

void RepeatAddition::calculateAddition()
{
	int inputNum, repeatNum;
	long sum = 0;
	int inputNumtemp;

	cout << "�����Ǽ����ظ�a�ĺ���������a+aa+aaa+aaaa...." << endl;
	cout << "������a��ֵ��";
	cin >> inputNum;
	inputNum = judgeInputFun(inputNum);
	cout << "�������ظ�������";
	cin >> repeatNum;
	repeatNum = judgeRepeatFun(repeatNum);

	cout << "����ʽΪ��";
	inputNumtemp = 0;
	for (int i = 0; i < repeatNum; i++){
		inputNumtemp = inputNumtemp + inputNum * pow(10, i);
		sum += inputNumtemp;
		cout << inputNumtemp;
		if (i < repeatNum - 1){
			cout << " + ";
		}
	}

	cout << "      �ظ�a��ֵ�ĺ�Ϊ��" << sum << endl;
}

int RepeatAddition::judgeInputFun(int input)
{
	while (1){
		if (input < 1 ){
			cout << "�����a����Ϊ�����������������룺";
			cin >> input;
		}
		else if (input > MAXINPUTNUM){
			cout << "�����a���벻����"<<MAXINPUTNUM<<"�����������룺";
			cin >> input;
		}
		else{
			return input;
		}
	}

}

int RepeatAddition::judgeRepeatFun(int repeat)
{
	while (1){
		if (repeat < 1){
			cout << "����Ĵ�������Ϊ�����������������룺";
			cin >> repeat;
		}
		else if (repeat > MAXREPEATNUM){
			cout << "������ظ��������벻����" << MAXREPEATNUM << ",���������룺";
			cin >> repeat;
		}
		else{
			return repeat;
		}
	}
}