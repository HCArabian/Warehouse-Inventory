#include "MS_Push.h"
#include <iostream>
using namespace std;

MS_Push::MS_Push()
{
	eight_teen = 0;
	twenty_four = 0;
	miss_eight_teen = 0;
	miss_twenty_four = 0;
}
void MS_Push::set(int eight, int four)
{
	eight_teen = eight;
	twenty_four = four;
}
void MS_Push::set_missing(int eight, int four)
{
	miss_eight_teen = eight;
	miss_twenty_four = four;
}
int MS_Push::get_eight() const
{
	return eight_teen;
}
int MS_Push::get_four() const
{
	return twenty_four;
}
int MS_Push::get_miss_eight() const
{
	return miss_eight_teen;
}
int MS_Push::get_miss_four() const
{
	return miss_twenty_four;
}

void MS_Push::read()
{
	cout << "18-inch Multi-Surface Push Broom: ";
	cin >> eight_teen;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_eight_teen;
	cout << "24-inch Multi-Surface Push Broom: ";
	cin >> twenty_four;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_twenty_four;
	
}
void MS_Push::print()
{
	cout << "18-inch Multi-Surface Push Broom: " << eight_teen << "\t" <<
		"-----MISSING/DAMAGED: " << miss_eight_teen << endl;
	cout << "24-inch Multi-Surface Push Broom: " << twenty_four << "\t" <<
		"-----MISSING/DAMAGED: " << miss_twenty_four << endl;
}
MS_Push::~MS_Push()
{

}