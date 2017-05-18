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

	cout << "本程序展示自由落体的实验！" << endl;
	cout << "请输入自由落体的高度：";
	cin >> inputHeight;
	while (1){
		if (inputHeight > MAXHEIGHT){
			cout << "自由落体的高度不得超过" << MAXHEIGHT << "米，请重新输入：";
			cin >> inputHeight;
		}
		else if (inputHeight < 1){
			cout << "输入的高度必须为正整数，请重新输入：";
			cin >> inputHeight;
		}
		else{
			break;
		}
	}
	cout << "请输入需要知道的第几次反弹：";
	cin >> inputLandingTime;
	while (1){
		if (inputLandingTime < 1){
			cout << "输入的第几次必须是正整数，请重新输入：";
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
		cout << "球在第" << inputLandingTime << "次之前已经停止反弹，共经历路程为" << outputDistance << "米。" << endl;
	}
	else{
		cout << "球在第" << inputLandingTime << "次反弹的高度为" << bounceHeight << "米，共经历路程为" << outputDistance << "米。" << endl;
	}
}


