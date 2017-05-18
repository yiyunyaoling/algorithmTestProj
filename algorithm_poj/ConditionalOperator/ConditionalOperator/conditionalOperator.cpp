/*
��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
���������(a>b)?a:b��������������Ļ������ӡ�

Input:     inputNum   (int)   ���ɶ��ٸ�ѧ���ɼ�
Output     scoreLevel  (struct[])   ÿ��ѧ���ķ����ȼ�


*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define MAXLENGTH  100

using namespace std;

struct Student
{
	int score;
	char level;
};

int inputJudgementFun(int inputNum)
{
	while (1){
		if (inputNum < 1){
			cout << "��������Ϊ�����������������룺";
			cin >> inputNum;
		}
		else if (inputNum > MAXLENGTH){
			cout << "�������������" << MAXLENGTH << "�����������룺";
			cin >> inputNum;
		}
		else{
			return inputNum;
		}
	}
	
}

int main(void)
{
	int inputNum;
	Student scoreLevel[MAXLENGTH];

	srand((unsigned)time(NULL));
	for (int i = 0; i < MAXLENGTH; i++){
		
		scoreLevel[i].score = rand() % 101;     //�������0-100����
		scoreLevel[i].level = NULL;
	}

	cout << "����������ѧ���ĳɼ���A��>=90),B(60-89),C(0<60)�����֡�" << endl;
	cout << "���������ɵ�ѧ��������";
	cin >> inputNum;
	
	inputNum = inputJudgementFun(inputNum);



	for (int i = 0; i < inputNum; i++){
		scoreLevel[i].level = scoreLevel[i].score < 90 ? (scoreLevel[i].score < 60 ? 'C' : 'B') : 'A';
	}

	cout << "��" << inputNum << "λͬѧ���ֺõĵȼ����£�" << endl;
	for (int i = 0; i < inputNum; i++){
		cout << "��" << i + 1 << "λͬѧ�ķ���Ϊ��" << scoreLevel[i].score << "���ȼ�Ϊ��" << scoreLevel[i].level<<endl;
	}
	system("pause");
	return 0;
}

