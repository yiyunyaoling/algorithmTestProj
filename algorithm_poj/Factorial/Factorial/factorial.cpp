#include "factorial.h"

Factorial::Factorial()
{

}

Factorial::~Factorial()
{

}

void Factorial::judgeFun(int *input)
{
	while (1){
		if (*input < 0){
			cout << "�����n����Ϊ��Ȼ�������������룺";
			cin >> *input;
		}
		else if (*input > MAXNUM){
			cout << "�����n���벻�ܴ���" << MAXNUM << "�����������룺";
			cin >> *input;
		}
		else{
			break;
		}
	}
}

long Factorial::recursionFun(int num)
{
	if (num == 0 || num == 1){
		return 1;
	}
	else{
		return num*recursionFun(num - 1);
	}
}

void Factorial::factorialFun()
{
	int inputNum;
	long outputNum;

	cout << "�������ǵݹ�ķ�����׳ˡ�" << endl;
	cout << "������Ҫ��Ľ׳�����";
	cin >> inputNum;
	judgeFun(&inputNum);

	outputNum = recursionFun(inputNum);
	cout << inputNum << "��= " << outputNum << endl;
}