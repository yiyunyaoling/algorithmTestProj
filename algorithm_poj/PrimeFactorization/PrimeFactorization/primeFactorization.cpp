/*
题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
(2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数n,重复执行第一步。
(3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。

Input:     inputNum  (int)   需要分解的正整数
Output:    outputArr[]   (int)  输出分解的质因数数组
*/

#include <iostream>

#define MAXLENGTH  50
#define MAXNUM     9999999
using namespace std;

int inputJudgementFun(int inputNum)             //对输入的数进行判断
{
	while (1){
		if (inputNum < 1){
			cout << "该数必须是正整数，请重新输入：";
			cin >> inputNum;
		}
		else if (inputNum == 1){
			cout << "1不可进行质因数分解，请重新输入：";
			cin >> inputNum;
		}
		else if(inputNum > MAXNUM){
			cout << "您输入的数字太大，目前不支持，请输入2到9999999的整数：";
			cin >> inputNum;
		}
		else{
			return inputNum;
		}
	}
}

int primeFactorizationFun(int inputNum, int outputArr[])     //对一个数进行质因式分解
{
	int primeNum = 0;
	int inputNumtemp;
	int prime = 2;
	inputNumtemp = inputNum;
	while (prime < inputNumtemp){
		if (inputNumtemp % prime == 0){
			inputNumtemp /= prime;
			outputArr[primeNum++] = prime;
			prime = 2;
		}
		else{
			prime++;
		}
	}
	outputArr[primeNum] = inputNumtemp;
	return primeNum+1;
}

int main(void)
{
	int inputNum, primeNum = 0;	
	int outputArr[MAXLENGTH];

	for (int i = 0; i < MAXLENGTH; i++){
		outputArr[i] = 0;
	}


	cout << "本实验将一个正整数分解质因数，请输入需要分解的正整数：";
	cin >> inputNum;
	
	inputNum = inputJudgementFun(inputNum);

	primeNum = primeFactorizationFun(inputNum, outputArr);

	if (primeNum == 0){
		cout << inputNum << "是一个质数，不能进行质因数分解。" << endl;
	}
	else{
		cout << inputNum << "是一个可分解的数，分解的质因数共有" << primeNum << "个，其分解形式为：" << endl;
		cout << inputNum << " = ";
		for (int i = 0; i < primeNum-1; i++){
			cout << outputArr[i] << " * ";
		}
		cout << outputArr[primeNum - 1];
		cout << endl;
	}

	system("pause");
	return 0;
}