#include <iostream>

using namespace std;

#define MAXDAY    20


class MonkeyEatPeaches
{
public:
	MonkeyEatPeaches();
	~MonkeyEatPeaches();

	void computePeaches();

private:
	void judgeDay(int *day);
};