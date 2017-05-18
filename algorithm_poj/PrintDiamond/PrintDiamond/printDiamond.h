#include <iostream>

using namespace std;

#define MAXNUM 20

class PrintDiamond
{
public:
	PrintDiamond();
	~PrintDiamond();

	void outputDiamond();

private:
	void judgeNum(int *num);
};