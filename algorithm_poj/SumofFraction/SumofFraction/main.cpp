/*
题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
程序分析：请抓住分子与分母的变化规律。

Input:      inputNum   (int)      一共几项

Output:     outputNum    (double)     前几项和
*/

#include "sumofFraction.h"

int main(void)
{
	SumofFraction *sumofFraction = new SumofFraction;
	sumofFraction->sumFun();

	system("pause");
	return 0;
}