#include "sumofFraction.h"

SumofFraction::SumofFraction()
{

}

SumofFraction::~SumofFraction()
{

}

void SumofFraction::judgeNum(int *input)
{
	while (1){
		if (*input < 1){
			cout << "��������Ϊ�����������������룺";
			cin >> *input;
		}
		else if (*input > MAXNUM){
			cout << "�������ܴ���" << MAXNUM << "�����������룺";
			cin >> *input;
		}
		else{
			break;
		}
	}
}

long SumofFraction::Fnmu(int i, long *fzi_1)
{
	long fnmu;
	if (i == 1){
		fnmu = 1;
		*fzi_1 = 2;
	}
	else{
		fnmu = *fzi_1;
	}
	return fnmu;
}

long SumofFraction::Fnzi(int i, long *fzi_1, long *fmi_1)
{
	long fnzi;
	if (i == 1){
		fnzi = 2;
		*fzi_1 = 2;
		*fmi_1 = 1;
	}
	else{
		fnzi = *fzi_1 + *fmi_1;
	}
	return fnzi;
}

void SumofFraction::sumFun()
{
	int inputNum;
	long fzi, fmi,fzi_1,fmi_1;
	double outputNum = 0;

	cout << "�������Ǽ�������ĺͣ�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰn��͡�" << endl;
	cout << "������������";
	cin >> inputNum;
	judgeNum(&inputNum);
	
	cout << "ǰ" << inputNum << "��ֱ�Ϊ��" << endl;
	for (int i = 1; i <= inputNum; i++){

		if (i == inputNum){
			fzi = Fnzi(i, &fzi_1, &fmi_1);
			fmi = Fnmu(i, &fzi_1);
			outputNum += fzi / fmi;
			cout << fzi << "/" << fmi << " = ";
		
		}
		else{
			fzi = Fnzi(i, &fzi_1, &fmi_1);
			fmi = Fnmu(i, &fzi_1);
			outputNum += fzi / fmi;
			cout <<fzi<< "/" << fmi << " + ";
			fmi_1 = fmi;
			fzi_1 = fzi;
		}
	}
	cout << outputNum << endl;
}