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

	cout << "��������Ѱ��һ������ʹ��������100����һ����ȫƽ�������ټ���168����һ����ȫƽ������" << endl;
	
	for (int i = 0; i < MAXLENGTH; i++){
		perfectArray[i] = 0;
	}
	outputNum = squareNumFun(perfectArray);

	cout << "��������" << outputNum << "�����ֱ�Ϊ��";
	for (int i = 0; i < outputNum; i++){
		if (i == outputNum - 1){
			cout << perfectArray[i] << "��"<<endl;
		}
		else{
			cout << perfectArray[i] << ", ";
		}
	}


}