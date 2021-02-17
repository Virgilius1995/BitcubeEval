#pragma once
#include <string>
#include "course.h"
class LECTURES;


using namespace std;

class DEGREE
{
public:
	DEGREE();
	string get_degree_name();
	int get_duration_name();
	string get_courses();
	string get_lecturer();

	void set_degree_name(string name);
	void set_duration_name(int new_duration);
	void add_course(COURSE new_course);
	void set_lecturer(string new_lect);
private:
	string degree_name;
	int duration;
	COURSE courses[30];
	int course_counter;
	string lecturer;
};