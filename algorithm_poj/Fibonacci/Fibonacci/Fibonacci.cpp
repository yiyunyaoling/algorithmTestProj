/*
��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ����Ӷ���Ϊ���٣�
��������� ���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....

input:   lengthofFibonacci  (int)쳲��������г���

output:  FibonacciArr[]    int[]쳲�������

*/

#include <iostream>

#define maxLengthofArr  50
using namespace std;

int main(void)
{
	int lengthofFibonacci;
	int FibonacciArr[maxLengthofArr];

	for (int i = 0; i < maxLengthofArr; i++){   
		FibonacciArr[i] = 0;
	}

	cout << "Please input the length of the Fibonacci you want:";
	cin >> lengthofFibonacci;
	
	while (lengthofFibonacci > maxLengthofArr){
		cout << "the number is out of max Length, please input again:";
		cin >> lengthofFibonacci;
	}

	for (int i = 0; i < lengthofFibonacci; i++){
		if (i == 0 || i == 1){
			FibonacciArr[i] = 1;
		}
		else{
			FibonacciArr[i] = FibonacciArr[i - 1] + FibonacciArr[i - 2];
		}
	}

	for (int i = 0; i < lengthofFibonacci; i++){
		cout <<"Fibonacci["<<i + 1<<"]: "<< FibonacciArr[i] << endl;
	}
	system("pause");
	return 0;

}