/*
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
����������ؼ��Ǽ����ÿһ���ֵ��

Input:     inputNum   (int)   ����a��ֵ
repeatNum  (int)   �ظ�a�Ĵ���

Output:    sum        (long)   �ظ�aֵ�ĺ�
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