/*
题目：判断101-200之间有多少个素数，并输出所有素数。
程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

input:   minInput (int) 输入数据范围最小值
         maxInput (int) 输入数据范围最大值

output:  primeNumn   (int)  输出素数的个数
         primeArr[]   (int[])   输出素数的数组
*/

#include <iostream>
#include <math.h>

using namespace std;

#define  MAXLENGTH   50

/*
function primeJudegFun
用来判断是否是素数
输入参数    int[] primeArr,  为存储素数用的数组
            int   min,       需要判断是否为素数的范围最小值
			int   max,       需要判断是否为素数的范围最大值
返回值      int  sqrtNum     判断之后得到素数的个数
*/
int primeJudgeFun(int primeArr[], int min, int max)
{
	int sqrtNum;
	int arrNum = 0;
	int primeMark;   //0表示未找到因数，1表示找到因数
	

	for (int i = min; i <= max; i++){
		primeMark = 0;
		if (i == 1){               //考虑数为1、2、3的情况，因为sqrt(4)==2，只有从4开始才可以以下循环
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
				if (i % j == 0){          //当整除时，表示已经不是素数
					primeMark = 1;
					break;
				}
			}
			if (primeMark == 0){         //全部没有被整除，则作为一个素数结果
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
	
	cout << "这个程序是判断某个范围内素数的个数，以及输出指定范围内所有的素数！" << endl;
	cout << "请输入指定的范围，最小值为：  ";
	cin >> minInput;
	cout << "请输入指定的范围，最大值为：  ";
	cin >> maxInput;
	while (minInput > maxInput || minInput < 1){
		if (minInput > maxInput){
			cout << "最大范围必须大于等于最小范围，请重新输入！" << endl;
			cout << "请输入指定的范围，最小值为：  ";
			cin >> minInput;
			cout << "请输入指定的范围，最大值为：  ";
			cin >> maxInput;
		}
		else if (minInput < 1){
			cout << "范围必须是正整数，请重新输入！" << endl;
			cout << "请输入指定的范围，最小值为：  ";
			cin >> minInput;
			cout << "请输入指定的范围，最大值为：  ";
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
		cout << "在范围" << minInput << "到" << maxInput << "中，不存在素数！" << endl;
	}
	else{
		cout << "在范围" << minInput << "到" << maxInput << "中，共存在素数 " <<primeNum <<"个。具体素数为：" <<endl;
		for (int i = 0; i < primeNum; i++){
			if (i < MAXLENGTH)
			    cout << "第" << i + 1 << "个素数为： " << primeArr[i] <<endl;
			else{
				cout << "素数太多，只显示前" << MAXLENGTH << "个素数。" << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}