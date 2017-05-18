
#define MAXREPEATNUM    6
#define MAXINPUTNUM     9

class RepeatAddition
{
public:
	RepeatAddition();
	~RepeatAddition();

	void calculateAddition();

private:
	int judgeInputFun(int input);
	int judgeRepeatFun(int repeat);
};