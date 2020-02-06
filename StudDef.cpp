#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include"Student.h"


int student::counter = 0;

//getters
int student::getStudentId()
{
	return stud_id;
}

string student::getStudentName()
{
	return sName;
}


//setters
void student::setStudentId()
{
	counter++;
	stud_id = counter;
}

void student::setStudentName(string nm)
{
	sName = nm;
}


void student::Display()
{
	cout << "Student Id : " << stud_id << endl;
	cout << "Student Name : " << sName << endl;
}
