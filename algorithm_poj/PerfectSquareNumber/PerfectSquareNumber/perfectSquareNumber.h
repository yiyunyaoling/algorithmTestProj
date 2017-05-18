#include <iostream>
#include <cmath>

using namespace std;

#define MAXLENGTH 20
#define MAXNUM   100000  

class PerfectSquareNumber
{
public:
	PerfectSquareNumber();
	~PerfectSquareNumber();

	void computeNumberFun();
private:
	int squareNumFun(int numArray[]);
	int isSqrt(int num);
};