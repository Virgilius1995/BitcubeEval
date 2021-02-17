#include "lecturers.h"

LECTURERS::LECTURERS()
{
	index = 0;
	birthDate = new time_t(0);
}

LECTURERS::LECTURERS(string name, string surname, string _email)
	:foreNames(name), surName(surname), email(_email)
{
	index = 0;
	birthDate = new time_t(0);
}

string LECTURERS::get_first_name()
{
	return foreNames;
}

string LECTURERS::get_full_name()
{
	string output = foreNames + " " + surName;
	return output;
}

string LECTURERS::get_email()
{
	return email;
}

time_t* LECTURERS::get_BirthDate()
{
	return birthDate;
}

string LECTURERS::get_Degree_List()
{
	string output;
	
	output += degrees.get_courses();
	
	return output;

}

void LECTURERS::set_first_name(string name)
{
	foreNames = name;
}

void LECTURERS::set_last_name(string _surname)
{
	surName = _surname;
}

void LECTURERS::set_email(string new_email)
{
	email = new_email;
}

void LECTURERS::set_birth_date(time_t* b_date)
{
	birthDate = b_date;
}

void LECTURERS::add_degree(DEGREE degree)
{
	degrees = degree;

}
