#include <iostream>

using namespace std;

#define LEVEL1  100000
#define LEVEL2  200000
#define LEVEL3  400000
#define LEVEL4  600000
#define LEVEL5  1000000

class BonusPayment
{
public:
	BonusPayment();
	~BonusPayment();

	void bonusFun();

private:
	long judgeFun(long input);
};