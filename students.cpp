#include "students.h"

STUDENTS::STUDENTS()
{
	currentDegree = new DEGREE();
	birthDate = new time_t(0);
}

STUDENTS::STUDENTS(string name, string surname, string _email)
	:foreNames(name), surName(surname), email(_email)
{
	currentDegree = new DEGREE();
	birthDate = new time_t(0);
}

string STUDENTS::get_first_name()
{
	return foreNames;
}

string STUDENTS::get_full_name()
{
	string output = foreNames + " " + surName;
	return output;
}

string STUDENTS::get_email()
{
	return email;
}

time_t STUDENTS::get_BirthDate()
{
	time_t hold = 0;
	return hold;
}

DEGREE* STUDENTS::get_Degree()
{
	return currentDegree;
}

void STUDENTS::set_first_name(string name)
{
	foreNames = name;
}

void STUDENTS::set_last_name(string surname)
{
	surName = surname;
}

void STUDENTS::set_email(string _email)
{
	email = _email;
}

void STUDENTS::set_currentDegree(DEGREE *degree)
{
	currentDegree = degree;
}

void STUDENTS::set_birth_date(time_t* b_date)
{
	birthDate = b_date;
}