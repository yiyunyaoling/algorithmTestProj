/*
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬����
����������������·ݴ���3ʱ�迼�Ƕ��һ�졣

Input:       year    (int)     ������
             month    (int)    ������
			 day     (int)     ������

Output��   dateNum      (int)      ��һ������һ��ĵڼ��죿

*/

#include "YTD.h"

int main(void)
{
	YTD *ytd = new YTD;
	ytd->computeYTD();

	system("pause");
	return 0;
}