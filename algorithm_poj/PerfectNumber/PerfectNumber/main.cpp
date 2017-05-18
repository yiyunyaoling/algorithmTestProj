/*
题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。

Input：    InputMaxNum  (int)   找出某个范围的最大值
           InputMinNum  (int)   找出某个范围的最小值

Output:    perfectNum[]   (struct [])     完数结构体
*/

#include "perfectNumber.h"

using namespace std;

int main(void)
{
	PerfectNumber *perfectNumber = new PerfectNumber();
	perfectNumber->perfectNumberFun();
	
	system("pause");
	return 0;
}