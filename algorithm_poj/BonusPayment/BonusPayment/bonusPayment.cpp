
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

	cout << "�������Ǽ�����ҵ���ŵĽ���" << endl;
	cout << "�����뵱�µ�����Ԫ����";
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
	cout << "���ݸ�������ҵ���ŵĽ���Ϊ" << bonus << "Ԫ��"<<endl;

}