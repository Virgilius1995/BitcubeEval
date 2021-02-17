// PracticeApp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This will serve as a simple test app to show that all related source and header files function//
//Only the basic functionality is tested
#include <iostream>
#include "course.h"
#include "degree.h"
#include "lecturers.h"
#include "students.h"

using namespace std;

int main()
{
    STUDENTS student1("Jeff", "Boolian", "jeff@email.com");//A new student is added
    STUDENTS student2("Jill", "Boolian", "jill@email.com");

    LECTURERS lect1("Jim", "Teach", "Jim@email.com");//A new lecturer is added

    COURSE* math = new COURSE(); //A new course is created
    math->course_name = "Math 1"; //Name assigned to course
    math->duration = 6; //A duration is added

    COURSE* science = new COURSE();
    science->course_name = "science";
    science->duration = int(6);

    DEGREE* basicBs = new DEGREE(); //A new degree is created

    basicBs->add_course(*math);//Courses are added to the degree
    basicBs->add_course(*science);

    basicBs->set_degree_name("Basic Bs");//Basic degree info is added
    basicBs->set_duration_name(6);

    basicBs->set_lecturer(lect1.get_full_name());

    cout << basicBs->get_courses();//Simple course information accessed

    student1.set_currentDegree(basicBs);//Student is assigned a degree



    return 0;
}

