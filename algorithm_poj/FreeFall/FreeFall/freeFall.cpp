#include "FreeFall.h"

using namespace std;

FreeFall::FreeFall()
{

}

FreeFall::~FreeFall()
{

}

void FreeFall::FreeFallFun()
{
	int inputHeight, inputLandingTime;
	double outputDistance, bounceHeight;
	int mark = 0;

	cout << "������չʾ���������ʵ�飡" << endl;
	cout << "��������������ĸ߶ȣ�";
	cin >> inputHeight;
	while (1){
		if (inputHeight > MAXHEIGHT){
			cout << "��������ĸ߶Ȳ��ó���" << MAXHEIGHT << "�ף����������룺";
			cin >> inputHeight;
		}
		else if (inputHeight < 1){
			cout << "����ĸ߶ȱ���Ϊ�����������������룺";
			cin >> inputHeight;
		}
		else{
			break;
		}
	}
	cout << "��������Ҫ֪���ĵڼ��η�����";
	cin >> inputLandingTime;
	while (1){
		if (inputLandingTime < 1){
			cout << "����ĵڼ��α����������������������룺";
			cin >> inputLandingTime;
		}
		else{
			break;
		}
	}
	bounceHeight = inputHeight;
	outputDistance = inputHeight;
	for (int i = 1; i <= inputLandingTime; i++){
		if (bounceHeight < 0.01){
			bounceHeight = 0;
			mark = 1;
		}
		else{
			bounceHeight /= 2;
			outputDistance += bounceHeight;
		}
	}

	if (mark == 1){
		cout << "���ڵ�" << inputLandingTime << "��֮ǰ�Ѿ�ֹͣ������������·��Ϊ" << outputDistance << "�ס�" << endl;
	}
	else{
		cout << "���ڵ�" << inputLandingTime << "�η����ĸ߶�Ϊ" << bounceHeight << "�ף�������·��Ϊ" << outputDistance << "�ס�" << endl;
	}
}


