/*
题目：利用递归方法求5!。
程序分析：递归公式：fn=fn_1*4!

Input:     inputNum    (int)      输入n
Output:    outputNum    (long)     阶乘结果
*/

#include "factorial.h"

int main(void)
{
	Factorial *factorial = new Factorial;
	factorial->factorialFun();
	system("pause");
	return 0;
}
