#pragma once
class Wood_Mops
{
public:
	int eight_teen, twenty_four, thirty, thirty_six, f_eight, sixty;
	int miss_eight_teen, miss_twenty_four, miss_thirty, miss_thirty_six, miss_f_eight, miss_sixty;
	Wood_Mops();
	void set(int one, int two, int three, int four, int five, int six);
	void set_missing(int one, int two, int three, int four, int five, int six);
	//int get_ten() const;
	int get_eight_teen() const;
	int get_twenty_four() const;
	int get_thirty() const;
	int get_thirty_six() const;
	int get_f_eight() const;
	int get_sixty() const;

	int get_miss_eight_teen() const;
	int get_miss_tw_four() const;
	int get_miss_thirty() const;
	int get_miss_thirty_six() const;
	int get_miss_f_eight() const;
	int get_miss_sixty() const;
	void read();
	void print();
	~Wood_Mops();
	
};

