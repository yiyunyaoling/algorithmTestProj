#include "factorial.h"

Factorial::Factorial()
{

}

Factorial::~Factorial()
{

}

void Factorial::judgeFun(int *input)
{
	while (1){
		if (*input < 0){
			cout << "输入的n必须为自然数，请重新输入：";
			cin >> *input;
		}
		else if (*input > MAXNUM){
			cout << "输入的n必须不能大于" << MAXNUM << "，请重新输入：";
			cin >> *input;
		}
		else{
			break;
		}
	}
}

long Factorial::recursionFun(int num)
{
	if (num == 0 || num == 1){
		return 1;
	}
	else{
		return num*recursionFun(num - 1);
	}
}

void Factorial::factorialFun()
{
	int inputNum;
	long outputNum;

	cout << "本程序是递归的方法求阶乘。" << endl;
	cout << "请输入要求的阶乘数：";
	cin >> inputNum;
	judgeFun(&inputNum);

	outputNum = recursionFun(inputNum);
	cout << inputNum << "！= " << outputNum << endl;
}