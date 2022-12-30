#pragma once

#ifndef TIME
#define TIME
class time
{
public:
	time();
	time(int h,int m);
	~time();
	void Addmin(int m);
	void Addhours(int h);
	void Reset(int h = 0, int m = 0);
	time Sum(const time &t1)const;
	void show()const;
private:
	int hours;
	int minutes;
};
#endif // !TIME

