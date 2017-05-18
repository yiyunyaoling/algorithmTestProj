/*
��Ŀ���ж�101-200֮���ж��ٸ����������������������
����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ����������������������������֮��������

input:   minInput (int) �������ݷ�Χ��Сֵ
         maxInput (int) �������ݷ�Χ���ֵ

output:  primeNumn   (int)  ��������ĸ���
         primeArr[]   (int[])   �������������
*/

#include <iostream>
#include <math.h>

using namespace std;

#define  MAXLENGTH   50

/*
function primeJudegFun
�����ж��Ƿ�������
�������    int[] primeArr,  Ϊ�洢�����õ�����
            int   min,       ��Ҫ�ж��Ƿ�Ϊ�����ķ�Χ��Сֵ
			int   max,       ��Ҫ�ж��Ƿ�Ϊ�����ķ�Χ���ֵ
����ֵ      int  sqrtNum     �ж�֮��õ������ĸ���
*/
int primeJudgeFun(int primeArr[], int min, int max)
{
	int sqrtNum;
	int arrNum = 0;
	int primeMark;   //0��ʾδ�ҵ�������1��ʾ�ҵ�����
	

	for (int i = min; i <= max; i++){
		primeMark = 0;
		if (i == 1){               //������Ϊ1��2��3���������Ϊsqrt(4)==2��ֻ�д�4��ʼ�ſ�������ѭ��
			continue;
		}
		else if (i == 2 || i == 3){
			primeArr[arrNum] = i;
			arrNum++;
			continue;
		}

		sqrtNum = (int)sqrt(i);
		if (arrNum < MAXLENGTH){
			for (int j = 2; j <= sqrtNum; j++){
				if (i % j == 0){          //������ʱ����ʾ�Ѿ���������
					primeMark = 1;
					break;
				}
			}
			if (primeMark == 0){         //ȫ��û�б�����������Ϊһ���������
				primeArr[arrNum] = i;
				arrNum++;
			}
		}
		else{
			for (int j = 2; j <= sqrtNum; j++){
				if (i % j == 0){
					primeMark = 1;
					break;
				}
			}
			if (primeMark == 0){
				arrNum++;
			}
		}
		
	}
	return arrNum;
}


int main(void)
{
	int minInput, maxInput;
	int primeArr[MAXLENGTH];
	int primeNum = 0;
	for (int i = 0; i < MAXLENGTH; i++){
		primeArr[i] = 0;
	}
	
	cout << "����������ж�ĳ����Χ�������ĸ������Լ����ָ����Χ�����е�������" << endl;
	cout << "������ָ���ķ�Χ����СֵΪ��  ";
	cin >> minInput;
	cout << "������ָ���ķ�Χ�����ֵΪ��  ";
	cin >> maxInput;
	while (minInput > maxInput || minInput < 1){
		if (minInput > maxInput){
			cout << "���Χ������ڵ�����С��Χ�����������룡" << endl;
			cout << "������ָ���ķ�Χ����СֵΪ��  ";
			cin >> minInput;
			cout << "������ָ���ķ�Χ�����ֵΪ��  ";
			cin >> maxInput;
		}
		else if (minInput < 1){
			cout << "��Χ�����������������������룡" << endl;
			cout << "������ָ���ķ�Χ����СֵΪ��  ";
			cin >> minInput;
			cout << "������ָ���ķ�Χ�����ֵΪ��  ";
			cin >> maxInput;
		}		
	}
	
	if (minInput == 1){
		primeNum = primeJudgeFun(primeArr, minInput + 1, maxInput);
	}
	else{
		primeNum = primeJudgeFun(primeArr, minInput, maxInput);
	}

	if (primeNum == 0){
		cout << "�ڷ�Χ" << minInput << "��" << maxInput << "�У�������������" << endl;
	}
	else{
		cout << "�ڷ�Χ" << minInput << "��" << maxInput << "�У����������� " <<primeNum <<"������������Ϊ��" <<endl;
		for (int i = 0; i < primeNum; i++){
			if (i < MAXLENGTH)
			    cout << "��" << i + 1 << "������Ϊ�� " << primeArr[i] <<endl;
			else{
				cout << "����̫�ֻ࣬��ʾǰ" << MAXLENGTH << "��������" << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}