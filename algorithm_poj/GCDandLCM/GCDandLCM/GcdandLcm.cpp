/*
��Ŀ����������������m��n���������Լ������С��������
�������������շ������

Input      inputN    (int)    ����������n
           inputM    (int)    ����������m

Output     GcdNum    (int)    ���Լ��
           LcmNum    (int)    ��С������

*/

#include <iostream>

using namespace std;

#define MAXNUM  9999999

int judgementFun(int inputNum)
{
	while (1){
		if (inputNum < 1){
			cout << "��������һ�������������������룺";
			cin >> inputNum;
			
		}
		else if (inputNum > MAXNUM){
			cout << "��󲻵ó���"<<MAXNUM<<"�����������룺";
			cin >> inputNum;
		}
		else{
			break;
		}
	}
	return inputNum;
}

int GcdFun(int inputM, int inputN)      //�������������Լ��
{
	int outputGcd;
	int maxInput,minInput, temp;

	maxInput = inputM > inputN ? inputM : inputN;
	minInput = inputM <= inputN ? inputM : inputN;
	temp = minInput;
	while (temp > 0){
		temp = maxInput % minInput;
		if (temp == 0){
			return minInput;
		}
		else{
			maxInput = minInput;
			minInput = temp;
		}
	}
}

int LcmFun(int inputM, int inputN)     //������������С������
{
	int outputLcm;
	int gcdNum;

	gcdNum = GcdFun(inputM, inputN);
	outputLcm = inputM * inputN / gcdNum;

	return outputLcm;

}

int main(void)
{
	int inputN, inputM;
	int GcdNum, LcmNum;

	cout << "������������������������Լ������С��������" << endl;
	cout << "������������m��";
	cin >> inputM;
	inputM = judgementFun(inputM);
	cout << "������������n��";
	cin >> inputN;
	inputN = judgementFun(inputN);

	GcdNum = GcdFun(inputM, inputN);
	LcmNum = LcmFun(inputM, inputN);

	cout << "��������������� " << inputM << " �� " << inputN << "�����Լ��Ϊ��" << GcdNum << " ��С������Ϊ��" << LcmNum << endl;

	system("pause");
	return 0;
}