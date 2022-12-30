#define _CRT_SECURE_NO_WARNINGS 1


#include "time00.h"
#include<string>
#include<iostream>

int main(char argc, char** argv)
{
	using std::cout;
	using std::cin;
	time palnning;
	time coding(2,40);
	time fixing(5,55);
	time total;
	cout << "palning time: " << '\n';
	palnning.show();
	cout << "coding time: " << '\n';
	coding.show();
	cout << "fixing time: " << '\n';
	fixing.show();

    total = coding.Sum(fixing);
	cout << "coding.sum(fixing): " << '\n';
	total.show();

	return 0;
}