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

	cout << "������ͳ�������ַ����еĸ����ַ�������" << endl;
	cout << "�������ַ�����";
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

	cout << "��ĸ���� " << countLetter << " �������ֹ��� " << countNumber << " �����ո��� " << countSpace << " ������������ " << countOther << " ��." << endl;
}