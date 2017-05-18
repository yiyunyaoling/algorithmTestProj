/*
题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子对数为多少？
程序分析： 兔子的规律为数列1,1,2,3,5,8,13,21....

input:   lengthofFibonacci  (int)斐波那契数列长度

output:  FibonacciArr[]    int[]斐波那契数

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