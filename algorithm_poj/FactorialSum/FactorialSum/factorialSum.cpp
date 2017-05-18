#include "factorialSum.h"

FactorialSum::FactorialSum()
{

}

FactorialSum::~FactorialSum()
{

}

void FactorialSum::judgeNumFun(int *input)
{
	while (1){
		if (*input < 1){
			cout << "项数必须为正整数，请重新输入：";
			cin >> *input;
		}
		else if (*input > MAXNUM){
			cout << "项数不得大于" << MAXNUM << "，请重新输入：";
			cin >> *input;
		}
		else{
			break;
		}
	}
}

void FactorialSum::sumFun()
{
	int inputNum;
	long outputNum = 0;
	long factor_i_1 = 1;

	cout << "本程序是求前n项阶乘的和。" << endl;
	cout << "请输入项数：";
	cin >> inputNum;
	judgeNumFun(&inputNum);

	cout << "前" << inputNum << "阶乘和为：";
	for (int i = 1; i <= inputNum; i++){
		
		if (i == inputNum){
			factor_i_1 *= i;
			outputNum += factor_i_1;
			cout << factor_i_1 ;
		}
		else{
			factor_i_1 *= i;
			outputNum += factor_i_1;
			cout << factor_i_1 << " + ";
		}
	}
	cout << " = " << outputNum<<endl;
}