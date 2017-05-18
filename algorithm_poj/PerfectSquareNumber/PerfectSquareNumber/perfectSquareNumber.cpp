#include "perfectSquareNumber.h"

PerfectSquareNumber::PerfectSquareNumber()
{

}

PerfectSquareNumber::~PerfectSquareNumber()
{

}

int PerfectSquareNumber::isSqrt(int num)
{
	int judge = 0;
	for (int i = 0; i <= sqrt(num); i++){
		if (num == pow(i, 2)){
			judge = 1;
			break;
		}
	}
	return judge;
}

int PerfectSquareNumber::squareNumFun(int numArray[])
{
	int outNum = 0;
	for (int i = -200; i < MAXNUM; i++){
		int num1 = i + 100;
		int num2 = i + 268;
		if (isSqrt(num1) && isSqrt(num2)){
			numArray[outNum++] = i;
		}
	}
	return outNum;
}

void PerfectSquareNumber::computeNumberFun()
{
	int perfectArray[MAXLENGTH];
	int outputNum;

	cout << "本程序是寻找一个数，使得它加上100后是一个完全平方数，再加上168又是一个完全平方数。" << endl;
	
	for (int i = 0; i < MAXLENGTH; i++){
		perfectArray[i] = 0;
	}
	outputNum = squareNumFun(perfectArray);

	cout << "该数共有" << outputNum << "个，分别为：";
	for (int i = 0; i < outputNum; i++){
		if (i == outputNum - 1){
			cout << perfectArray[i] << "。"<<endl;
		}
		else{
			cout << perfectArray[i] << ", ";
		}
	}


}