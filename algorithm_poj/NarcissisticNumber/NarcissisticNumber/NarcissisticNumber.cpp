/*
��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ����������磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
�������������forѭ������100-999������ÿ�����ֽ����λ��ʮλ����λ��

Input      ��
Output     narcissisticNumArr[]   (int)  ˮ�ɻ���������
*/

#include <iostream>
#include <math.h>

#define MAXLENGTH  50

using namespace std;

int narcissisticNumFun(int narNumArr[], int minNum, int maxNum)   //Ѱ��ˮ�ɻ���
{
	int narGe, narShi, narBai;
	int narNumtemp;
	int narNum = 0;
	for (int i = minNum; i <= maxNum;i++){
		narNumtemp = i;
		narGe = narNumtemp % 10;      //�����ֲ�ɸ�λ��ʮλ����λ
		narNumtemp /= 10;
		narShi = narNumtemp % 10;
		narNumtemp /= 10;
		narBai = narNumtemp;
		narNumtemp = i;
		if (narNumtemp == (int)pow(narGe, 3.0) + (int)pow(narShi, 3.0) + (int)pow(narBai, 3.0)){
			narNumArr[narNum++] = narNumtemp;
		}

	}
	return narNum;
}

int minmaxJudgementFun(int min, int max)       //�жϷ�Χ�ĺ���
{
	
	if (min <= 0 || max <= 0){
		return -1;              //����Ϊ������
	}
	if (min > max){            //��Сֵ����С�ڵ������ֵ
		return -2;
	}
	if (min < 100 || max > 999){     //����Ϊ��λ��
		return -3;
	}
	return 1;
}

int main(void)
{
	int narcissisticNumArr[MAXLENGTH];
	int mark,narNum = 0;
	int minNum, maxNum;

	for (int i = 0; i < MAXLENGTH; i++){
		narcissisticNumArr[i] = 0;
	}

	cout << "���½����ӡ��ָ����Χ��ˮ�ɻ�����" << endl;
	cout << "����0����Ĭ�ϴ�ӡ100-999��ˮ�ɻ�����" << endl;
	cout << "����1�����ӡָ����Χ��ˮ�ɻ�����" << endl;
	cout << "�������ǣ�";
	cin >> mark;

	if (mark == 0){
		//��ӡ100��999��ˮ�ɻ���
		minNum = 100;
		maxNum = 999;
		narNum = narcissisticNumFun(narcissisticNumArr, minNum, maxNum);
	}
	else if (mark == 1){
		//��ӡָ����Χ��ˮ�ɻ���
		cout << "�����뷶Χ����Сֵ��";
		cin >> minNum;
		cout << "�����뷶Χ�����ֵ��";
		cin >> maxNum;
		while (int i = minmaxJudgementFun(minNum, maxNum)){
			if (i == -1){
				cout << "����ķ�Χ����Ϊ�����������������룡"<<endl;
			}
			else if (i == -2){
				cout << "��Сֵ���ܴ������ֵ�����������룡"<<endl;
			}
			else if (i == -3){
				cout << "ˮ�ɻ�������Ϊ��λ�������������룡"<<endl;
			}
			else if (i == 1){
				break;
			}
			cout << "�����뷶Χ����Сֵ��";
			cin >> minNum;
			cout << "�����뷶Χ�����ֵ��";
			cin >> maxNum;
		}
		narNum = narcissisticNumFun(narcissisticNumArr, minNum, maxNum);
	}
	else{
		cout << "��������ȷ�ı�ǡ�" << endl;
		system("pause");
		return 0;
	}

	
	cout << "�ڷ�ΧΪ" << minNum << "��" << maxNum << "֮���ˮ�ɻ����ĸ���Ϊ��" << narNum << "����" << endl;
	if (narNum){
		for (int i = 0; i < narNum; i++){
			cout << "��" << i + 1 << "��ˮ�ɻ���Ϊ��" << narcissisticNumArr[i] << endl;
		}
	}
	system("pause");
	return 0;
}