#include "tableTennis.h"

TableTennis::TableTennis()
{

}

TableTennis::~TableTennis()
{

}

void TableTennis::match()
{
	char i, j, k; // i��a�Ķ��֣� j��b�Ķ��֣�k��c�Ķ���

	cout << "��������չʾƹ����������ñ�̵õ�������ƥ�䡣" << endl;

	for (i = 'x'; i <= 'z'; i++){
		for (j = 'x'; j <= 'z'; j++){
			if (i != j){
				for (k = 'x'; k <= 'z'; k++){
					if (k != i && k != j){
						if (i != 'x' && k != 'x' && k != 'z'){
							cout << "������ƥ��Ϊ��a -- " << i << ", b -- " << j << ", c -- " << k << endl;
						}
					}
				}
			}
		}
	}



}