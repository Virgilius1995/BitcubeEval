#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "degree.h"
using namespace std;


class LECTURERS
{
public:
	LECTURERS();
	LECTURERS(string name, string surname, string _email);
	string get_first_name();
	string get_full_name();
	string get_email();
	time_t* get_BirthDate();
	string get_Degree_List();

	void set_first_name(string name);
	void set_last_name(string _surname);
	void set_email(string new_email);
	void set_birth_date(time_t* b_date);
	void add_degree(DEGREE degree);

private:
	string foreNames, surName, email;
	time_t *birthDate;
	DEGREE degrees;
	int index;
};
