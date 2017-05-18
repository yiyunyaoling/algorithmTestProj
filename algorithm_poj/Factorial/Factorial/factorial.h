#include <iostream>

using namespace std;

#define  MAXNUM   15

class Factorial
{
public:
	Factorial();
	~Factorial();

	void factorialFun();

private:
	void judgeFun(int *input);
	long recursionFun(int num);
};