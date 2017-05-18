/*
题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
程序分析：关键是计算出每一项的值。

Input:     inputNum   (int)   输入a的值
repeatNum  (int)   重复a的次数

Output:    sum        (long)   重复a值的和
*/

#include "repeatAddition.h"

#include <iostream>

int main(void)
{
	RepeatAddition *repeat = new RepeatAddition;
	repeat->calculateAddition();

	system("pause");
	return 0;
}