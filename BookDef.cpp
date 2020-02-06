#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include"Book.h"


//getters
int Book::getBookNumber()
{
	return bookNumber;
}

string Book::getBookName()
{
	return bookName;
}

string Book::getBookAuthorName()
{
	return bookAuthor;
}


//setters
void Book::setBookNumber(int no)
{
	bookNumber = no;
}

void Book::setBookName(string b_nm)
{
	bookName = b_nm;
}

void Book::setBookAuthorName(string a_nm)
{
	bookAuthor = a_nm;
}
