#include "numberSizeArrangement.h"

NumberSizeArrangement::NumberSizeArrangement()
{

}

NumberSizeArrangement::~NumberSizeArrangement()
{

}

int NumberSizeArrangement::minFun(int x, int y)
{
	return x <= y ? x : y;
}

void NumberSizeArrangement::sizeArrangement()
{
	int inputX, inputY, inputZ;
	int arrange[3];
	

	cout << "������������������ֽ������򣬰���С���������" << endl;

	for (int i = 0; i < 3; i++){
		cout << "�������" << i + 1 << "������";
		if (i == 0){
			cin >> inputX;
			arrange[i] = inputX;
		}
		else if (i == 1){
			cin >> inputY;
			arrange[i] = inputY;
		}
		else if (i == 2){
			cin >> inputZ;
			arrange[i] = inputZ;
		}
	}


	arrange[0] = minFun(inputX, inputY);
	arrange[0] = minFun(arrange[0], inputZ);
	if (arrange[0] == inputX){
		arrange[1] = minFun(inputY, inputZ);
		if (arrange[1] == inputY){
			arrange[2] = inputZ;
		}
		else if (arrange[1] == inputZ){
			arrange[2] = inputY;
		}
	}
	else if (arrange[0] == inputY){
		arrange[1] = minFun(inputZ, inputX);
		if (arrange[1] == inputX){
			arrange[2] = inputZ;
		}
		else if (arrange[1] == inputZ){
			arrange[2] = inputX;
		}
	}
	else if (arrange[0] == inputZ){
		arrange[1] = minFun(inputX, inputY);
		if (arrange[1] == inputX){
			arrange[2] = inputY;
		}
		else if (arrange[1] == inputY){
			arrange[2] = inputX;
		}
	}
	cout << "����������С���������Ϊ��";
	for (int i = 0; i < 3; i++){
		if (i == 2){
			cout << arrange[i] << endl;
		}
		else{
			cout << arrange[i] << " < ";
		}

	}

}