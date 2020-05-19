#include "Wood_Mops.h"
#include <iostream>
using namespace std;

Wood_Mops::Wood_Mops()
{
	eight_teen = 0;
	twenty_four = 0;
	thirty = 0;
	thirty_six = 0;
	f_eight = 0;
	sixty = 0;

	miss_eight_teen = 0;
	miss_twenty_four = 0;
	miss_thirty = 0;
	miss_thirty_six = 0;
	miss_f_eight = 0;
	miss_sixty = 0;
}

void Wood_Mops::set(int one, int two, int three, int four, int five, int six)
{
	eight_teen = one;
	twenty_four = two;
	thirty = three;
	thirty_six = four;
	f_eight = five;
	sixty = six;
}
void Wood_Mops::set_missing(int one, int two, int three, int four, int five, int six)
{
	miss_eight_teen = one;
	miss_twenty_four = two;
	miss_thirty = three;
	miss_thirty_six = four;
	miss_f_eight = five;
	miss_sixty = six;
}
//int Wood_Mops::get_ten() const
//{
//	return 0;
//}

int Wood_Mops::get_eight_teen() const
{
	return eight_teen;
}

int Wood_Mops::get_twenty_four() const
{
	return twenty_four;
}

int Wood_Mops::get_thirty() const
{
	return thirty;
}

int Wood_Mops::get_thirty_six() const
{
	return thirty_six;
}

int Wood_Mops::get_f_eight() const
{
	return f_eight;
}
int Wood_Mops::get_sixty() const
{
	return sixty;
}
int Wood_Mops::get_miss_eight_teen() const
{
	return miss_eight_teen;
}

int Wood_Mops::get_miss_tw_four() const
{
	return miss_twenty_four;
}

int Wood_Mops::get_miss_thirty() const
{
	return miss_thirty;
}

int Wood_Mops::get_miss_thirty_six() const
{
	return miss_thirty_six;
}

int Wood_Mops::get_miss_f_eight() const
{
	return miss_f_eight;
}

int Wood_Mops::get_miss_sixty() const
{
	return miss_sixty;
}
void Wood_Mops::read()
{
	cout << "18-inch Wood Handle Dust Mop: ";
	cin >> eight_teen;
	cout  << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_eight_teen;
	cout << "24-inch Wood Handle Dust Mop: ";
	cin >> twenty_four;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_twenty_four;
	cout << "30-inch Wood Handle Dust Mop: ";
	cin >> thirty;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_thirty;
	cout << "36-inch Wood Handle Dust Mop: ";
	cin >> thirty_six;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_thirty_six;
	cout << "48-inch Wood Handle Dust Mop: ";
	cin >> f_eight;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_f_eight;
	cout << "60-inch Wood Handle Dust Mop: ";
	cin >> sixty;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_sixty;
}
void Wood_Mops::print()
{
	cout << "18-inch Wood Handle Dust Mop: " << eight_teen << "\t" <<
		"\t-----MISSING/DAMAGED: " << miss_eight_teen << endl;
	cout << "24-inch Wood Handle Dust Mop: " << twenty_four << "\t" <<
		"\t-----MISSING/DAMAGED: " << miss_twenty_four << endl;
	cout << "30-inch Wood Handle Dust Mop: " << thirty << "\t" <<
		"\t-----MISSING/DAMAGED: " << miss_thirty << endl;
	cout << "36-inch Wood Handle Dust Mop: " << thirty_six << "\t" <<
		"\t-----MISSING/DAMAGED: " << miss_thirty_six << endl;
	cout << "48-inch Wood Handle Dust Mop: " << f_eight << "\t" <<
		"\t-----MISSING/DAMAGED: " << miss_f_eight << endl;
	cout << "60-inch Wood Handle Dust Mop: " << sixty << "\t" <<
		"\t-----MISSING/DAMAGED: " << miss_sixty << endl;
}
Wood_Mops::~Wood_Mops()
{

}
