/*
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������

Input��    InputMaxNum  (int)   �ҳ�ĳ����Χ�����ֵ
           InputMinNum  (int)   �ҳ�ĳ����Χ����Сֵ

Output:    perfectNum[]   (struct [])     �����ṹ��
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