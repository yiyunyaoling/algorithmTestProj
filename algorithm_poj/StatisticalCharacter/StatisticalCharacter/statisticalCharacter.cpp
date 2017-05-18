#include "statisticalCharacter.h"

#include <iostream>
#include <string>
using namespace std;

StatisticalCharacter::StatisticalCharacter()
{
	countLetter = 0;
	countNumber = 0;
	countSpace = 0;
	countOther = 0;
}

StatisticalCharacter::~StatisticalCharacter()
{

}

void StatisticalCharacter::countChar()
{
	char inputStr[300];
	int i = 0;

	cout << "本程序统计输入字符串中的各个字符个数！" << endl;
	cout << "请输入字符串：";
	gets(inputStr);

	while (inputStr[i] != '\0'){
		if ((inputStr[i] >= 'a' && inputStr[i] <= 'z') || (inputStr[i] >= 'A' && inputStr[i] <= 'Z')){
			countLetter++;
		}
		else if (inputStr[i] >= '0' && inputStr[i] <= '9'){
			countNumber++;
		}
		else if (inputStr[i] == ' '){
			countSpace++;
		}
		else{
			countOther++;
		}
		i++;
	}

	cout << "字母共有 " << countLetter << " 个，数字共有 " << countNumber << " 个，空格共有 " << countSpace << " 个，其他共有 " << countOther << " 个." << endl;
}