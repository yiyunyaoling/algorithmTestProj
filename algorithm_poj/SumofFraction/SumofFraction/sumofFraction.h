#include <iostream>

using namespace std;

#define MAXNUM   40

class SumofFraction
{
public:
	SumofFraction();
	~SumofFraction();

	void sumFun();
private:
	void judgeNum(int *input);
	long Fnzi(int i, long *fzi_1, long *fmi_1);
	long Fnmu(int i, long *fzi_1);
};