#include "Metal_Mops.h"
#include <iostream>
#include <iomanip>
using namespace std;

Metal_Mops::Metal_Mops()
{
	ten = 0;
	eight_teen = 0;
	twenty_four = 0;
	thirty = 0;
	thirty_six = 0;
	f_eight = 0;
	sixty = 0;

	miss_ten = 0;
	miss_eight_teen = 0;
	miss_twenty_four = 0;
	miss_thirty = 0;
	miss_thirty_six = 0;
	miss_f_eight = 0;
	miss_sixty = 0;
}
void Metal_Mops::set(int one, int two, int three, int four, int five, int six, int seven)
{
	ten = one;
	eight_teen = two;
	twenty_four = three;
	thirty = four;
	thirty_six = five;
	f_eight = six;
	sixty = seven;
}
void Metal_Mops::set_missing(int one, int two, int three, int four, int five, int six, int seven)
{
	miss_ten = one;
	miss_eight_teen = two;
	miss_twenty_four = three;
	miss_thirty = four;
	miss_thirty_six = five;
	miss_f_eight = six;
	miss_sixty = seven;
}
int Metal_Mops::get_ten() const
{
	return ten;
}

int Metal_Mops::get_eight_teen() const
{
	return eight_teen;
}

int Metal_Mops::get_tw_four() const
{
	return twenty_four;
}

int Metal_Mops::get_thirty() const
{
	return thirty;
}

int Metal_Mops::get_thirty_six() const
{
	return thirty_six;
}

int Metal_Mops::get_f_eight() const
{
	return f_eight;
}

int Metal_Mops::get_sixty() const
{
	return sixty;

}int Metal_Mops::get_miss_ten() const
{
	return miss_ten;
}
int Metal_Mops::get_miss_eight_teen() const
{
	return miss_eight_teen;
}

int Metal_Mops::get_miss_tw_four() const
{
	return miss_twenty_four;
}

int Metal_Mops::get_miss_thirty() const
{
	return miss_thirty;
}

int Metal_Mops::get_miss_thirty_six() const
{
	return miss_thirty_six;
}

int Metal_Mops::get_miss_f_eight() const
{
	return miss_f_eight;
}

int Metal_Mops::get_miss_sixty() const
{
	return miss_sixty;
}
void Metal_Mops::read()
{
	cout << "10-inch Metal Handle Dust Mop: ";
	cin >> ten;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_ten;
	cout << "18-inch Metal Handle Dust Mop: ";
	cin >> eight_teen;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_eight_teen;
	cout << "24-inch Metal Handle Dust Mop: "; 
	cin >> twenty_four;
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_twenty_four;
	cout << "30-inch Metal Handle Dust Mop: "; 
	cin >> thirty; 
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_thirty;
	cout << "36-inch Metal Handle Dust Mop: "; 
	cin >> thirty_six; 
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_thirty_six;
	cout << "48-inch Metal Handle Dust Mop: "; 
	cin >> f_eight; 
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_f_eight;
	cout << "60-inch Metal Handle Dust Mop: ";
	cin >> sixty; 
	cout << "\t\t****MISSING/DAMAGED: ";
	cin >> miss_sixty;
}
void Metal_Mops::print()
{
	cout << "10-inch Metal Handle Dust Mop: " << ten <<
		"\t-----MISSING/DAMAGED: " << miss_ten << endl;
	cout << "18-inch Metal Handle Dust Mop: " << eight_teen << 
		"\t-----MISSING/DAMAGED: " << miss_eight_teen << endl;
	cout << "24-inch Metal Handle Dust Mop: " << twenty_four << 
		"\t-----MISSING/DAMAGED: " << miss_twenty_four << endl;
	cout << "30-inch Metal Handle Dust Mop: " <<  thirty << 
		"\t-----MISSING/DAMAGED: " << miss_thirty << endl;
	cout << "36-inch Metal Handle Dust Mop: " << thirty_six << 
		"\t-----MISSING/DAMAGED: " << miss_thirty_six << endl;
	cout << "48-inch Metal Handle Dust Mop: " << f_eight <<  
		"\t-----MISSING/DAMAGED: " << miss_f_eight << endl;
	cout << "60-inch Metal Handle Dust Mop: " << sixty <<
		"\t-----MISSING/DAMAGED: " << miss_sixty << endl;
}
Metal_Mops::~Metal_Mops()
{

}

