/*
题目：输出9*9口诀。
程序分析：分行与列考虑，共9行9列，i控制行，j控制列。

Output:          outArray[9][9]       (int[][])   输出9*9乘法表
*/

#include "multiplicationTable.h"

int main(void)
{
	Multiplication *multiplication = new Multiplication;
	multiplication->outputTable();

	system("pause");
	return 0;
}