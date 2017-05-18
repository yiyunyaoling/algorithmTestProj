
#include "bonusPayment.h"

BonusPayment::BonusPayment()
{

}

BonusPayment::~BonusPayment()
{

}

long BonusPayment::judgeFun(long inputProfit)
{
	while (1){
		if (inputProfit < 0){
			return 0;
		}
		else{
			return inputProfit;
		}
	}
}

void BonusPayment::bonusFun()
{
	long inputProfit;
	long bonus = 0;

	cout << "本程序是计算企业发放的奖金。" << endl;
	cout << "请输入当月的利润（元）：";
	cin >> inputProfit;

	inputProfit = judgeFun(inputProfit);

	if (inputProfit <= LEVEL1){
		bonus = inputProfit * 0.1;
	}
	else if (inputProfit <= LEVEL2){
		bonus = (long)((inputProfit - LEVEL1)*0.075 + LEVEL1 * 0.1);
	}
	else if (inputProfit <= LEVEL3){
		bonus = (long)((inputProfit - LEVEL2)*0.05 + (LEVEL2-LEVEL1) * 0.075 + LEVEL1 * 0.1);
	}
	else if (inputProfit <= LEVEL4){
		bonus = (long)((inputProfit - LEVEL3)*0.03 + (LEVEL3-LEVEL2)*0.05 + (LEVEL2-LEVEL1) * 0.075 + LEVEL1*0.1);
	}
	else if (inputProfit <= LEVEL5){
		bonus = (long)((inputProfit - LEVEL4)*0.015 + (LEVEL4-LEVEL3)*0.03 + (LEVEL3-LEVEL2)*0.05 + (LEVEL2-LEVEL1)*0.075 + LEVEL1*0.1);
	}
	else{
		bonus = (long)((inputProfit - LEVEL5)*0.01 + (LEVEL5-LEVEL4)*0.015 + (LEVEL4-LEVEL3)*0.03 + (LEVEL3-LEVEL2)*0.05 + (LEVEL2-LEVEL1)*0.075 + LEVEL1*0.1);
	}
	cout << "根据该利润，企业发放的奖金为" << bonus << "元！"<<endl;

}