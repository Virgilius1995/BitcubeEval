#include "degree.h"
#include "course.h"
#include <iostream>

using namespace std;

DEGREE::DEGREE()
{
	course_counter = 0;
}

string DEGREE::get_degree_name()
{
	return degree_name;
}

int DEGREE::get_duration_name()
{
	return duration;
}

string DEGREE::get_courses()
{
	string output = "";
	for (int a = 0; a <= course_counter; a++)
	{
		output += courses[a].course_name + '\n';

	}
	return output;
}

string DEGREE::get_lecturer()
{
	return lecturer;
}

void DEGREE::set_degree_name(string name)
{
	degree_name = name;
}

void DEGREE::set_duration_name(int new_duration)
{
	duration = new_duration;
}

void DEGREE::add_course(COURSE new_course)
{
	if (course_counter < 30)
	{
		courses[course_counter] = new_course;
		course_counter++;
	}
	else
	{
		std::cerr << "Failled as course list is full.";
	}
}

void DEGREE::set_lecturer(string new_lect)
{
	lecturer = new_lect;
}