#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include"Book.h"
#include"Student.h"

class Library
{
public:
	vector<pair<Book, int>> LibraryBookCount;
	vector<student> StudentMembersOfLibrary;

	void RegisterStudent(vector<student>* V_Stud);
	void AddBookInLibrary(vector<pair<Book, int>> *V_Book);
	void ModifyBook();
	void DeleteBook();
	void IssueBookToStudent();
	void TakeReturnedBookFromStudent();
	void PrintBooks(Book *, int quant);
	void DisplayFileData();

};