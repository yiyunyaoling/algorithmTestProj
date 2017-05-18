/*
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
程序分析：利用辗除法。

Input      inputN    (int)    输入正整数n
           inputM    (int)    输入正整数m

Output     GcdNum    (int)    最大公约数
           LcmNum    (int)    最小公倍数

*/

#include <iostream>

using namespace std;

#define MAXNUM  9999999

int judgementFun(int inputNum)
{
	while (1){
		if (inputNum < 1){
			cout << "必须输入一个正整数，请重新输入：";
			cin >> inputNum;
			
		}
		else if (inputNum > MAXNUM){
			cout << "最大不得超过"<<MAXNUM<<"，请重新输入：";
			cin >> inputNum;
		}
		else{
			break;
		}
	}
	return inputNum;
}

int GcdFun(int inputM, int inputN)      //求两个数的最大公约数
{
	int outputGcd;
	int maxInput,minInput, temp;

	maxInput = inputM > inputN ? inputM : inputN;
	minInput = inputM <= inputN ? inputM : inputN;
	temp = minInput;
	while (temp > 0){
		temp = maxInput % minInput;
		if (temp == 0){
			return minInput;
		}
		else{
			maxInput = minInput;
			minInput = temp;
		}
	}
}

int LcmFun(int inputM, int inputN)     //求两个数的最小公倍数
{
	int outputLcm;
	int gcdNum;

	gcdNum = GcdFun(inputM, inputN);
	outputLcm = inputM * inputN / gcdNum;

	return outputLcm;

}

int main(void)
{
	int inputN, inputM;
	int GcdNum, LcmNum;

	cout << "本程序求解两个正整数的最大公约数和最小公倍数。" << endl;
	cout << "请输入正整数m：";
	cin >> inputM;
	inputM = judgementFun(inputM);
	cout << "请输入正整数n：";
	cin >> inputN;
	inputN = judgementFun(inputN);

	GcdNum = GcdFun(inputM, inputN);
	LcmNum = LcmFun(inputM, inputN);

	cout << "输入的两个正整数 " << inputM << " 和 " << inputN << "的最大公约数为：" << GcdNum << " 最小公倍数为：" << LcmNum << endl;

	system("pause");
	return 0;
}