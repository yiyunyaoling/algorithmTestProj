/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。
程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。

Input:      inputX    (int)   输入第一个数
            inputY    (int)   输入第二个数
			inputZ    (int)   输入第三个数

Output：    arrangeArray[3]     (int[])      从小到大的顺序排列
*/

#include "numberSizeArrangement.h"

int main(void)
{
	NumberSizeArrangement *numberSizeArrangement = new NumberSizeArrangement;
	numberSizeArrangement->sizeArrangement();

	system("pause");
	return 0;
}