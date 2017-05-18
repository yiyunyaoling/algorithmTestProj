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
			cout << "最大范围不得超过" << MAXINPUT << ",请重新输入：";
			cin >> inputMaxNum;
		}
		else if (inputMaxNum < MININPUT){
			cout << "最大范围不得小于" << MININPUT << ",请重新输入：";
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
			cout << "最小范围不得超过" << MAXINPUT << ",请重新输入：";
			cin >> inputMinNum;
		}
		else if (inputMinNum < MININPUT){
			cout << "最小范围不得小于" << MININPUT << ",请重新输入：";
			cin >> inputMaxNum;
		}
		else if (inputMinNum > inputMaxNum){
			cout << "最小范围不得大于最大范围，请重新输入：";
			cin >> inputMinNum;
		}
		else{
			return inputMinNum;
		}
	}
}

int PerfectNumber::judgePerfectNumFun(int inputNum)       //判断是否是完数
{

	int temp;
	int sum = 0;

	countNum = 0;
	for (int i = 0; i < MAXLENGTH; i++){
		factor[i] = 0;
	}

	temp = inputNum;
	for (int i = 1; i < temp; i++){       //求所有因子
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

	cout << "本次程序求解完数，请输入指定范围的完数。" << endl;
	cout << "请输入范围的最大值:";
	cin >> inputMaxNum;
	inputMaxNum = judgeMaxFun(inputMaxNum);
	cout << "请输入范围的最小值：";
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
	cout << "其范围在" << inputMinNum << "到" << inputMaxNum << "范围内的完数为：" << endl;
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
