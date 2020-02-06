#pragma once
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
#include<string>
#include"Library.h"
#include"Student.h"
#include"Book.h"

int main()
{
	Library l1;
	vector <pair<Book, int>> V_book;
	l1.AddBookInLibrary(&V_book);
	l1.DisplayFileData();
	return 0;
}