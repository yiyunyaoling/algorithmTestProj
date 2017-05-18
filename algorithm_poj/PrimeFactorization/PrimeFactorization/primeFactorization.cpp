/*
��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
�����������n���зֽ���������Ӧ���ҵ�һ����С������k��Ȼ������������ɣ�
(1)����������ǡ����n����˵���ֽ��������Ĺ����Ѿ���������ӡ�����ɡ�
(2)���n<>k����n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����,��Ϊ�µ�������n,�ظ�ִ�е�һ����
(3)���n���ܱ�k����������k+1��Ϊk��ֵ,�ظ�ִ�е�һ����

Input:     inputNum  (int)   ��Ҫ�ֽ��������
Output:    outputArr[]   (int)  ����ֽ������������
*/

#include <iostream>

#define MAXLENGTH  50
#define MAXNUM     9999999
using namespace std;

int inputJudgementFun(int inputNum)             //��������������ж�
{
	while (1){
		if (inputNum < 1){
			cout << "���������������������������룺";
			cin >> inputNum;
		}
		else if (inputNum == 1){
			cout << "1���ɽ����������ֽ⣬���������룺";
			cin >> inputNum;
		}
		else if(inputNum > MAXNUM){
			cout << "�����������̫��Ŀǰ��֧�֣�������2��9999999��������";
			cin >> inputNum;
		}
		else{
			return inputNum;
		}
	}
}

int primeFactorizationFun(int inputNum, int outputArr[])     //��һ������������ʽ�ֽ�
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


	cout << "��ʵ�齫һ���������ֽ�����������������Ҫ�ֽ����������";
	cin >> inputNum;
	
	inputNum = inputJudgementFun(inputNum);

	primeNum = primeFactorizationFun(inputNum, outputArr);

	if (primeNum == 0){
		cout << inputNum << "��һ�����������ܽ����������ֽ⡣" << endl;
	}
	else{
		cout << inputNum << "��һ���ɷֽ�������ֽ������������" << primeNum << "������ֽ���ʽΪ��" << endl;
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