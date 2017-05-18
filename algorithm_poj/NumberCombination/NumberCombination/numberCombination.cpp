#include "NumberCombination.h"

NumberCombination::NumberCombination()
{

}

NumberCombination::~NumberCombination()
{

}

int NumberCombination::judgeNumFun(int num, int i)
{
	while (1){
		if (num > 9){
			cout << "��������ֱ���Ϊ��λ���������������" << i + 1 << "������";
			cin >> num;
		}
		else if (num < 0){
			cout << "��������ֱ���Ϊ�����������������" << i + 1 << "������";
			cin >> num;
		}
		else{
			return num;
		}
	}
}

int NumberCombination::judgeSameFun(int *num, int *newNumArray, int length)
{
	int diffNum = 0;
	for (int i = 0; i < length; i++){
		for (int j = i + 1; j < length; j++){
			if (num[i] == num[j])
				break;

			if (j == length - 1){
				newNumArray[diffNum] = num[i];
				diffNum++;
			}
		}
	}
	newNumArray[diffNum] = num[length-1];
	diffNum++;

	return diffNum;
}

void NumberCombination::combinationFun()
{
	int *inputNum = new int[4];
	int *newNumArray = new int[4];
	int outputNum;
	int outputNumber[MAXLENGTH];
	int diffNum;
	int count = 0;

	for (int i = 0; i < MAXLENGTH; i++){
		outputNumber[i] = 0;
	}

	cout << "������������4����λ����Ȼ��������ϸ��ֻ�����ͬ�����ظ����ֵ���λ����" << endl;
	for (int i = 0; i < 4; i++){
		cout << "�����" << i + 1 << "������";
		cin >> inputNum[i];
		inputNum[i] = judgeNumFun(inputNum[i], i);
	}

	


	diffNum = judgeSameFun(inputNum, newNumArray, 4);


	for (int i = 0; i < diffNum; i++){
		if (newNumArray[i] == 0){
			continue;
		}
		for (int j = 0; j < diffNum; j++){
			for (int m = 0; m < diffNum; m++){
				if (i != j && i != m && j != m){
					outputNumber[count++] = newNumArray[i] * 100 + newNumArray[j] * 10 + newNumArray[m];
				}
				
			}
		}
	}

	cout << "������ͬ�����ظ����ֵ���λ������" << count << "�����ֱ�Ϊ��" << endl;
	for (int i = 0; i < count; i++){
		if (i == count - 1){
			cout << outputNumber[i] << endl;
		}
		else{
			cout << outputNumber[i] << ", ";
		}
	}

	delete[] inputNum;
	delete[] newNumArray;
}