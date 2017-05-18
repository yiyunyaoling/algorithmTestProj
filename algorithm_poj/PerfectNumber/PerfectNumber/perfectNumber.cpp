#include "perfectNumber.h"

using namespace std;

PerfectNumber::PerfectNumber()
{

}
PerfectNumber::~PerfectNumber()
{

}

int PerfectNumber::judgeMaxFun(int inputMaxNum)
{
	while (1){
		if (inputMaxNum > MAXINPUT){
			cout << "���Χ���ó���" << MAXINPUT << ",���������룺";
			cin >> inputMaxNum;
		}
		else if (inputMaxNum < MININPUT){
			cout << "���Χ����С��" << MININPUT << ",���������룺";
			cin >> inputMaxNum;
		}
		else{
			return inputMaxNum;
		}
	}
}

int PerfectNumber::judgeMinFun(int inputMaxNum, int inputMinNum)
{
	while (1){
		if (inputMinNum > MAXINPUT){
			cout << "��С��Χ���ó���" << MAXINPUT << ",���������룺";
			cin >> inputMinNum;
		}
		else if (inputMinNum < MININPUT){
			cout << "��С��Χ����С��" << MININPUT << ",���������룺";
			cin >> inputMaxNum;
		}
		else if (inputMinNum > inputMaxNum){
			cout << "��С��Χ���ô������Χ�����������룺";
			cin >> inputMinNum;
		}
		else{
			return inputMinNum;
		}
	}
}

int PerfectNumber::judgePerfectNumFun(int inputNum)       //�ж��Ƿ�������
{

	int temp;
	int sum = 0;

	countNum = 0;
	for (int i = 0; i < MAXLENGTH; i++){
		factor[i] = 0;
	}

	temp = inputNum;
	for (int i = 1; i < temp; i++){       //����������
		if (temp % i == 0){
			factor[countNum] = i;
			countNum++;
		}
	}
	for (int i = 0; i < countNum; i++){
		sum += factor[i];
	}
	if (sum == inputNum){
		return 1;
	}
	else{
		return 0;
	}
}

void PerfectNumber::perfectNumberFun()
{
	int inputMaxNum, inputMinNum;
	int num = 0;
	PerfectNum perfectNum[MAXLENGTH];
	for (int i = 0; i < MAXLENGTH; i++){
		perfectNum[i].perNum = 0;
		for (int j = 0; j < MAXLENGTH; j++){
			perfectNum[i].factorNum[j] = 0;
		}
	}

	cout << "���γ������������������ָ����Χ��������" << endl;
	cout << "�����뷶Χ�����ֵ:";
	cin >> inputMaxNum;
	inputMaxNum = judgeMaxFun(inputMaxNum);
	cout << "�����뷶Χ����Сֵ��";
	cin >> inputMinNum;
	inputMinNum = judgeMinFun(inputMaxNum, inputMinNum);

	for (int i = inputMinNum; i <= inputMaxNum; i++){
		if (judgePerfectNumFun(i)){
			perfectNum[num].perNum = i;
			for (int j = 0; j < countNum; j++){
				perfectNum[num].factorNum[j] = factor[j];
			}
			num++;
		}

	}
	cout << "�䷶Χ��" << inputMinNum << "��" << inputMaxNum << "��Χ�ڵ�����Ϊ��" << endl;
	for (int i = 0; i < num; i++){
		cout << perfectNum[i].perNum << " = ";
		for (int j = 0; j < MAXLENGTH; j++){
			if (perfectNum[i].factorNum[j] == 0){
				break;
			}
			else{
				if (perfectNum[i].factorNum[j + 1] == 0){
					cout << perfectNum[i].factorNum[j];
				}
				else{
					cout << perfectNum[i].factorNum[j] << " + ";
				}
			}
		}
		cout << endl;
	}

}
