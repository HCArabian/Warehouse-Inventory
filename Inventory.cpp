#include "Metal_Mops.h"
#include "MS_Push.h"
#include "Refills.h"
#include "RS_Push.h"
#include "Wood_Mops.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice = 0;
	Metal_Mops *metal = new Metal_Mops();
	Wood_Mops *wood = new Wood_Mops();
	MS_Push* multi = new MS_Push();
	RS_Push* rough = new RS_Push();
	Refills* refills = new Refills(); 

	cout << setw(105) << "Welcome to the Warehouse Inventory Tracker:\n" << setw(125);
	//Add to SQL
	cout << endl;

	do
	{
		cout << setfill('_') << setw(168) << "_"   << endl;
		cout << setw(20) << 
			"1) Metal Handle Mops\n" <<
			"2) Wood Handle Mops\n" << 
			"3) Multi-Surface push Brooms\n" <<
			"4) Rough-Surface Push Brooms\n" << 
			"5) Mop-Head Refills\n" << 
			"6) Results\n" <<
			"7) Quit Program\n" << endl;
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			cout << "Metal Handle Mops\n";
			metal->read();
			cout << endl;
		}
		else if (choice == 2)
		{
			cout << "Wood Handle Mops\n";
			wood->read();
			cout << endl;
		}
		else if (choice == 3)
		{
			cout << "Multi-Surface Push Broom\n";
			multi->read();
			cout << endl;
		}
		else if (choice == 4)
		{
			cout << "Rough-Surface Push Broom\n";
			rough->read();
			cout << endl;
		}
		else if (choice == 5)
		{
			cout << "Refills\n";
			refills->read();
			cout << endl;
		}
		else if (choice == 6)
		{
			metal->print();
			cout << endl;
			wood->print();
			cout << endl;
			multi->print();
			cout << endl;
			rough->print();
			cout << endl;
			refills->print();
			cout << endl;
		}
		else if (choice == 7)
		{
			cout << "You have succesfully quit the program!" << endl;
			return 0;
		}
		else
		{
			cout << "Invalid Entry, please enter a valid number." << endl;
		}

	}while (choice == true);
}