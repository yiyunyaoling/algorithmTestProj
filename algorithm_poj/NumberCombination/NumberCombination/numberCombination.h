#include <iostream>

using namespace std;

#define MAXLENGTH  50

class NumberCombination
{
public:

	NumberCombination();
	~NumberCombination();

	void combinationFun();

private:
	int judgeNumFun(int num, int i);
	int judgeSameFun(int *num, int *newNumArray, int length);
};