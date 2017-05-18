#include "printDiamond.h"

PrintDiamond::PrintDiamond()
{

}

PrintDiamond::~PrintDiamond()
{

}

void PrintDiamond::judgeNum(int *num)
{
	while (1){
		if (*num < 1){
			cout << "�����������Ϊ�����������������룺";
			cin >> *num;
		}
		else if (*num > MAXNUM){
			cout << "����������С��" << MAXNUM << ",���������룺";
			cin >> *num;
		}
		else{
			break;
		}
	}
}

void PrintDiamond::outputDiamond()
{
	int inputNum;

	cout << "��������������Ρ�" << endl;
	cout << "������ߴ��С��";
	cin >> inputNum;
	judgeNum(&inputNum);
	

	for (int i = 0; i < inputNum; i++){
		for (int j = 0; j < 2 * inputNum; j++){
			if (j < inputNum - i){
				cout << " ";
			}
			else if (j >= inputNum - i && j <= inputNum + i){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 1; i < inputNum; i++){
		cout << " ";
		for (int j = 0; j < inputNum * 2 - i; j++){
			if (j < i){
				cout << " ";
			}
			else if (j >= i && j < 2 * inputNum - i - 1){
				cout << "*";
			}
		}
		cout << endl;
	}

}