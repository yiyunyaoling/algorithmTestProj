#include <iostream>

using namespace std;

class YTD
{
public:
	YTD();
	~YTD();

	void computeYTD();

private:
	void judgeYTD(int *year, int *month, int *day);
};