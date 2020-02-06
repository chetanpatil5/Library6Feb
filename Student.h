#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include"Book.h"

class student
{
	int stud_id;
	string sName;
	static int counter;

public:

	vector<Book> bookList;

	//getters
	int getStudentId();
	string getStudentName();

	//setters
	void setStudentId();
	void setStudentName(string nm);

	void Display();


};