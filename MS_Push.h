#pragma once
class MS_Push
{
public:
	int eight_teen, twenty_four;
	int miss_eight_teen, miss_twenty_four;
	MS_Push();
	void set(int eight, int four);
	void set_missing(int eight, int four);
	int get_eight() const;
	int get_four() const;
	int get_miss_eight() const;
	int get_miss_four() const;
	void read();
	void print();
	~MS_Push();
};

