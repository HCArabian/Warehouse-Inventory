#include "Refills.h"
#include <iostream>
#include <iomanip>
using namespace std;

Refills::Refills()
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
void Refills::set(int one, int two, int three, int four, int five, int six)
{
	eight_teen = one;
	twenty_four = two;
	thirty = three;
	thirty_six = four;
	f_eight = five;
	sixty = six;
}
void Refills::set_missing(int one, int two, int three, int four, int five, int six)
{
	miss_eight_teen = one;
	miss_twenty_four = two;
	miss_thirty = three;
	miss_thirty_six = four;
	miss_f_eight = five;
	miss_sixty = six;
}
int Refills::get_eight_teen() const
{
	return eight_teen;
}

int Refills::get_twenty_four() const
{
	return twenty_four;
}

int Refills::get_thirty() const
{
	return thirty;
}

int Refills::get_thirty_six() const
{
	return thirty_six;
}

int Refills::get_f_eight() const
{
	return f_eight;
}

int Refills::get_sixty() const
{
	return sixty;
}
int Refills::get_miss_eight_teen() const
{
	return miss_eight_teen;
}

int Refills::get_miss_tw_four() const
{
	return miss_twenty_four;
}

int Refills::get_miss_thirty() const
{
	return miss_thirty;
}

int Refills::get_miss_thirty_six() const
{
	return miss_thirty_six;
}

int Refills::get_miss_f_eight() const
{
	return miss_f_eight;
}

int Refills::get_miss_sixty() const
{
	return miss_sixty;
}
//void Refills::read()
//{
//	cout << "18-inch Refills: ";
//	cin >> eight_teen;
//	cout << "24-inch Refills: ";
//	cin >> twenty_four;
//	cout << "30-inch Refills: ";
//	cin >> thirty;
//	cout << "36-inch Refills: ";
//	cin >> thirty_six;
//	cout << "48-inch Refills: ";
//	cin >> f_eight;
//	cout << "60-inch Refills: ";
//	cin >> sixty;
//}
void Refills::read()
{
	cout << "18-inch Metal Handle Dust Mop: ";
	cin >> eight_teen;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_eight_teen;
	cout << "24-inch Metal Handle Dust Mop: ";
	cin >> twenty_four;
	cout<< "\t\t****MISSING/DAMAGED: ";
	cin >> miss_twenty_four;
	cout << "30-inch Metal Handle Dust Mop: ";
	cin >> thirty;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_thirty;
	cout << "36-inch Metal Handle Dust Mop: ";
	cin >> thirty_six;
	cout  << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_thirty_six;
	cout << "48-inch Metal Handle Dust Mop: ";
	cin >> f_eight;
	cout  << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_f_eight;
	cout << "60-inch Metal Handle Dust Mop: ";
	cin >> sixty;
	cout  << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_sixty;
}
void Refills::print()
{
	cout << "18-inch Refills: " << eight_teen << "\t" <<
		"-----MISSING/DAMAGED: " << miss_eight_teen << endl;
	cout << "24-inch Refills: " << twenty_four << "\t"  <<
		"-----MISSING/DAMAGED: " << miss_twenty_four << endl;
	cout << "30-inch Refills: " << thirty << "\t" <<
		"-----MISSING/DAMAGED: " << miss_thirty << endl;
	cout << "36-inch Refills: " << thirty_six << "\t" <<
		"-----MISSING/DAMAGED: " << miss_thirty_six << endl;
	cout << "48-inch Refills: " << f_eight << "\t" << 
		"-----MISSING/DAMAGED: " << miss_f_eight << endl;
	cout << "60-inch Refills: " << sixty << "\t" <<
		"-----MISSING/DAMAGED: " << miss_sixty << endl;
}
Refills::~Refills()
{

}