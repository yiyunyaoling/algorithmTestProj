/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
情况，闰年且输入月份大于3时需考虑多加一天。

Input:       year    (int)     输入年
             month    (int)    输入月
			 day     (int)     输入日

Output：   dateNum      (int)      这一天是这一年的第几天？

*/

#include "YTD.h"

int main(void)
{
	YTD *ytd = new YTD;
	ytd->computeYTD();

	system("pause");
	return 0;
}