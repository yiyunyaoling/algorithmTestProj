/*
��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
�������������while���,����Ϊ������ַ���Ϊ'\n'.

Input:   inputChar    char*  �����ַ���
Output:    countLetter   int    ��ĸ����
           countNumber   int    ��������
		   countSpace    int    �ո�����
		   countOther    int    ��������
*/

#include "statisticalCharacter.h"

#include <iostream>

using namespace std;

int main(void)
{
	StatisticalCharacter *character = new StatisticalCharacter;
	character->countChar();

	system("pause");
	return 0;
}