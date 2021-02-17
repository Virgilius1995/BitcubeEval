#pragma once
#include <string>
#include <ctime>

#include "degree.h"

using namespace std;
class STUDENTS 
{
public:
	STUDENTS();
	STUDENTS(string name, string surname, string _email);
	
	
	string get_first_name();
	string get_full_name();
	string get_email();
	time_t get_BirthDate();
	DEGREE* get_Degree();

	void set_first_name(string name);
	void set_last_name(string surname);
	void set_email(string _email);
	void set_currentDegree(DEGREE *degree);
	void set_birth_date(time_t* b_date);

private:
	string foreNames, surName, email;
	time_t *birthDate;
	DEGREE *currentDegree;
};