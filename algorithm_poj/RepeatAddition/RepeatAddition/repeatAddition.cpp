
#include "repeatAddition.h"

#include <iostream>


using namespace std;

RepeatAddition::RepeatAddition()
{
}

RepeatAddition::~RepeatAddition()
{
}

void RepeatAddition::calculateAddition()
{
	int inputNum, repeatNum;
	long sum = 0;
	int inputNumtemp;

	cout << "本题是计算重复a的和数，比如a+aa+aaa+aaaa...." << endl;
	cout << "请输入a的值：";
	cin >> inputNum;
	inputNum = judgeInputFun(inputNum);
	cout << "请输入重复次数：";
	cin >> repeatNum;
	repeatNum = judgeRepeatFun(repeatNum);

	cout << "其表达式为：";
	inputNumtemp = 0;
	for (int i = 0; i < repeatNum; i++){
		inputNumtemp = inputNumtemp + inputNum * pow(10, i);
		sum += inputNumtemp;
		cout << inputNumtemp;
		if (i < repeatNum - 1){
			cout << " + ";
		}
	}

	cout << "      重复a的值的和为：" << sum << endl;
}

int RepeatAddition::judgeInputFun(int input)
{
	while (1){
		if (input < 1 ){
			cout << "输入的a必须为正整数，请重新输入：";
			cin >> input;
		}
		else if (input > MAXINPUTNUM){
			cout << "输入的a必须不大于"<<MAXINPUTNUM<<"，请重新输入：";
			cin >> input;
		}
		else{
			return input;
		}
	}

}

int RepeatAddition::judgeRepeatFun(int repeat)
{
	while (1){
		if (repeat < 1){
			cout << "输入的次数必须为正整数，请重新输入：";
			cin >> repeat;
		}
		else if (repeat > MAXREPEATNUM){
			cout << "输入的重复次数必须不大于" << MAXREPEATNUM << ",请重新输入：";
			cin >> repeat;
		}
		else{
			return repeat;
		}
	}
}