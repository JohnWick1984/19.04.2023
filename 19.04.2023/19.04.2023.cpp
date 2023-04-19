// 19.04.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string.h>

using namespace std;

class Data {
	int day;
	string month;
	int year;
public:
	Data(int day, string month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	};

	void PrintData()
	{
		cout << day << month << year;
	
	}
};

class Human {
public:

	int ID;
	string LastName;
	string Name;
	string MiddleName;
    Data& data;
	Human(int ID, string LastName, string Name, string MiddleName, Data& data) :ID(ID), LastName(LastName), Name(Name), MiddleName(MiddleName), data(data) {}


	void PrintHuman()
	{
		cout << ID<< LastName<< Name<< MiddleName << &;
	}

};


int main()
{
	Data A = Data(9, "May", 1984);
	Human B = Human(1, "Doe", "John", "unknownovich", A);

	    B.PrintHuman(); /*A.PrintData(); */

	
}
