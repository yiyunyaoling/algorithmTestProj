/*
题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位。

Input      无
Output     narcissisticNumArr[]   (int)  水仙花数的数组
*/

#include <iostream>
#include <math.h>

#define MAXLENGTH  50

using namespace std;

int narcissisticNumFun(int narNumArr[], int minNum, int maxNum)   //寻找水仙花数
{
	int narGe, narShi, narBai;
	int narNumtemp;
	int narNum = 0;
	for (int i = minNum; i <= maxNum;i++){
		narNumtemp = i;
		narGe = narNumtemp % 10;      //将数字拆成个位、十位、百位
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

int minmaxJudgementFun(int min, int max)       //判断范围的函数
{
	
	if (min <= 0 || max <= 0){
		return -1;              //必须为正整数
	}
	if (min > max){            //最小值必须小于等于最大值
		return -2;
	}
	if (min < 100 || max > 999){     //必须为三位数
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

	cout << "以下将会打印出指定范围的水仙花数。" << endl;
	cout << "输入0，则默认打印100-999的水仙花数；" << endl;
	cout << "输入1，则打印指定范围的水仙花数；" << endl;
	cout << "请输入标记：";
	cin >> mark;

	if (mark == 0){
		//打印100到999的水仙花数
		minNum = 100;
		maxNum = 999;
		narNum = narcissisticNumFun(narcissisticNumArr, minNum, maxNum);
	}
	else if (mark == 1){
		//打印指定范围的水仙花数
		cout << "请输入范围的最小值：";
		cin >> minNum;
		cout << "请输入范围的最大值：";
		cin >> maxNum;
		while (int i = minmaxJudgementFun(minNum, maxNum)){
			if (i == -1){
				cout << "输入的范围必须为正整数，请重新输入！"<<endl;
			}
			else if (i == -2){
				cout << "最小值不能大于最大值，请重新输入！"<<endl;
			}
			else if (i == -3){
				cout << "水仙花数必须为三位数，请重新输入！"<<endl;
			}
			else if (i == 1){
				break;
			}
			cout << "请输入范围的最小值：";
			cin >> minNum;
			cout << "请输入范围的最大值：";
			cin >> maxNum;
		}
		narNum = narcissisticNumFun(narcissisticNumArr, minNum, maxNum);
	}
	else{
		cout << "请输入正确的标记。" << endl;
		system("pause");
		return 0;
	}

	
	cout << "在范围为" << minNum << "到" << maxNum << "之间的水仙花数的个数为：" << narNum << "个！" << endl;
	if (narNum){
		for (int i = 0; i < narNum; i++){
			cout << "第" << i + 1 << "个水仙花数为：" << narcissisticNumArr[i] << endl;
		}
	}
	system("pause");
	return 0;
}