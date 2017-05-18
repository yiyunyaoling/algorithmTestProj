
#include <iostream>

#define MAXINPUT  999999
#define MININPUT  1
#define MAXLENGTH   500

struct PerfectNum
{
	int perNum;
	int factorNum[MAXLENGTH];
};

class PerfectNumber
{
public:
	PerfectNumber();
	~PerfectNumber();

	void perfectNumberFun();

private:
	int judgeMaxFun(int inputMaxNum);
	int judgeMinFun(int inputMaxNum, int inputMinNum);
	int judgePerfectNumFun(int inputNum);

private:
	int factor[MAXLENGTH];
	int countNum;

};