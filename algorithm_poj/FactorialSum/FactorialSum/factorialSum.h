#include <iostream>

using namespace std;

#define MAXNUM   20


class FactorialSum
{
public:
	FactorialSum();
	~FactorialSum();

	void sumFun();

private:
	void judgeNumFun(int *input);
};