#include "multiplicationTable.h"

Multiplication::Multiplication()
{

}

Multiplication::~Multiplication()
{

}

void Multiplication::outputTable()
{
	int outArray[9][9];

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			outArray[i][j] = 0;
		}
	}

	cout << "���������9*9�˷����ñ�������ʾ��" << endl;
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < i+1; j++){
			outArray[i][j] = (i + 1)*(j + 1);
			cout << i + 1 << "*" << j + 1 << "=" << outArray[i][j]<<"\t";
		}
		cout << endl;
	}
}