/*
题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在 第10次落地时，
共经过多少米？第10次反弹多高？

Input:    inputHeight  (int)  输入自由落体的高度
inputLandingTime   (int)  输入第几次落地

Output:   outputDistance     (double)  输出共经历多少米
bounceHeight       (double)  某次反弹高度
*/

#include "FreeFall.h"

int main(void)
{
	FreeFall *freeFall = new FreeFall;
	freeFall->FreeFallFun();

	system("pause");
	return 0;
}