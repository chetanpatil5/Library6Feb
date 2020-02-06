#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<string>

class Book
{
	int bookNumber;
	string bookName;
	string bookAuthor;

public:

	//getters
	int getBookNumber();
	string getBookName();
	string getBookAuthorName();

	//setters
	void setBookNumber(int no);
	void setBookName(string b_nm);
	void setBookAuthorName(string a_nm);

	void Display();


};