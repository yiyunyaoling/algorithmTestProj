/*
题目：打印出如下图案（菱形）
*
***
******
********
******
***
*
程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重 for循环，第一层控制行，第二层控制列。


*/

#include "printDiamond.h"

int main(void)
{
	PrintDiamond *printDiamond = new PrintDiamond;
	printDiamond->outputDiamond();
	system("pause");
	return 0;
}