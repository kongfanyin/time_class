#define _CRT_SECURE_NO_WARNINGS 1
#include"time00.h"
#include<iostream>
time::time(int h, int m)
{
	hours = h;
	minutes = m;
}
void time::Addmin(int m)
{
	minutes += m;
	hours += minutes % 60;
	minutes %= 60;
}
void time::Addhours(int h)
{
	hours += h;
}
void time::Reset(int h , int m)
{
	hours = h;
	minutes = m;
}
time time::Sum(const time &t1)const
{
	time sum;
	sum.minutes = minutes + t1.minutes;
	sum.hours = hours + t1.hours + sum.minutes /60;
	sum.minutes %= 60;
	return sum;
}
void time::show()const
{
	std::cout << "hous: " << hours << ",minutes: "<< minutes << "'\n";
}
time::time()
{
	hours = 0;
	minutes = 0;
}
time::~time()
{

}