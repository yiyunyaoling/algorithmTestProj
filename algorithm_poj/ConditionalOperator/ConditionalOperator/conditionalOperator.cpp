/*
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
程序分析：(a>b)?a:b这是条件运算符的基本例子。

Input:     inputNum   (int)   生成多少个学生成绩
Output     scoreLevel  (struct[])   每个学生的分数等级


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
			cout << "人数必须为正整数，请重新输入：";
			cin >> inputNum;
		}
		else if (inputNum > MAXLENGTH){
			cout << "最大人数不超过" << MAXLENGTH << "，请重新输入：";
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
		
		scoreLevel[i].score = rand() % 101;     //随机产生0-100分数
		scoreLevel[i].level = NULL;
	}

	cout << "本程序将所有学生的成绩按A（>=90),B(60-89),C(0<60)来划分。" << endl;
	cout << "请输入生成的学生人数：";
	cin >> inputNum;
	
	inputNum = inputJudgementFun(inputNum);



	for (int i = 0; i < inputNum; i++){
		scoreLevel[i].level = scoreLevel[i].score < 90 ? (scoreLevel[i].score < 60 ? 'C' : 'B') : 'A';
	}

	cout << "这" << inputNum << "位同学划分好的等级如下：" << endl;
	for (int i = 0; i < inputNum; i++){
		cout << "第" << i + 1 << "位同学的分数为：" << scoreLevel[i].score << "，等级为：" << scoreLevel[i].level<<endl;
	}
	system("pause");
	return 0;
}

