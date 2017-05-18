/*
题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
程序分析：利用while语句,条件为输入的字符不为'\n'.

Input:   inputChar    char*  输入字符串
Output:    countLetter   int    字母数量
           countNumber   int    数字数量
		   countSpace    int    空格数量
		   countOther    int    其他数量
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