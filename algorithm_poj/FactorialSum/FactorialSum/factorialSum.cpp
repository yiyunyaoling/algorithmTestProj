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
			cout << "��������Ϊ�����������������룺";
			cin >> *input;
		}
		else if (*input > MAXNUM){
			cout << "�������ô���" << MAXNUM << "�����������룺";
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

	cout << "����������ǰn��׳˵ĺ͡�" << endl;
	cout << "������������";
	cin >> inputNum;
	judgeNumFun(&inputNum);

	cout << "ǰ" << inputNum << "�׳˺�Ϊ��";
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