#pragma once
#include <string>
using namespace std;

class Time
{
public:
	class Triad
	{

		int first;
		int second;
		int third;

	public:
		int getFirst() const { return first; }
		void setFirst(int value) { first = value; }
		int getSecond() const { return second; }
		void setSecond(int value) { second = value; }
		int getThird() const { return third; }
		void setThird(int value) { third = value; }
		void Init(int firstValue, int secondValue, int thirdValue);
		void Display() const;
		void Read();
		bool h1(Time::Triad t) const;
		bool h2(Time::Triad t) const;
		bool m1(Time::Triad t) const;
		bool m2(Time::Triad t) const;
		bool s1(Time::Triad t) const;
		bool s2(Time::Triad t) const;
		double check();
	};



	Triad getTriad() const { return t; }
	void setTriad(Triad tValue) { t = tValue; }
	void Init(Triad t);
	void Display() const;
	void Read();
	bool h1(Time d) const;
	bool h2(Time d) const;
	bool m1(Time d) const;
	bool m2(Time d) const;
	bool s1(Time d) const;
	bool s2(Time d) const;
private:
	Time::Triad t;
};

