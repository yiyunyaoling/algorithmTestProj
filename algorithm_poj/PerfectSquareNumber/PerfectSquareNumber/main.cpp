/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后的结果满足如下条件，即是结果。

Output:      perfectArray    (int[])    符合条件的数组     
*/

#include "perfectSquareNumber.h"

int main(void)
{
	PerfectSquareNumber *perfectSquareNumber = new PerfectSquareNumber;
	perfectSquareNumber->computeNumberFun();

	system("pause");
	return 0;
}