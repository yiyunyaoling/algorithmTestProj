#include "tableTennis.h"

TableTennis::TableTennis()
{

}

TableTennis::~TableTennis()
{

}

void TableTennis::match()
{
	char i, j, k; // i是a的对手， j是b的对手，k是c的对手

	cout << "本程序是展示乒乓球比赛，用编程得到比赛的匹配。" << endl;

	for (i = 'x'; i <= 'z'; i++){
		for (j = 'x'; j <= 'z'; j++){
			if (i != j){
				for (k = 'x'; k <= 'z'; k++){
					if (k != i && k != j){
						if (i != 'x' && k != 'x' && k != 'z'){
							cout << "比赛的匹配为：a -- " << i << ", b -- " << j << ", c -- " << k << endl;
						}
					}
				}
			}
		}
	}



}