/*
题目：求1+2!+3!+...+20!的和
程序分析：此程序只是把累加变成了累乘。

Input:      inputNum    (int)    输入项数

Output：    outputNum    (long)     阶乘的和
*/

#include "factorialSum.h"

int main(void)
{
	FactorialSum *factorialSum = new FactorialSum;
	factorialSum->sumFun();
	system("pause");
	return 0;
}