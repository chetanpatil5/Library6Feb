#pragma once
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
#include<string>
#include"Library.h"


void Library::RegisterStudent(vector<student>* V_Stud)
{
	student s;
	string name;
	cout << "\nEnter Student Name : ";
	cin >> name;
	s.setStudentName(name);
	s.setStudentId();
	V_Stud->push_back(s);
}

void Library::AddBookInLibrary(vector<pair<Book, int>> *V_Book)
{
	Book b;
	string name;
	int bno;
	int quant;
	string a_nm;
	cout << "\nEnter Book Name : ";
	cin >> name;
	b.setBookName(name);

	cout << "\nEnter Book Author Name : ";
	cin >> a_nm;
	b.setBookAuthorName(a_nm);

	cout << "\nEnter Book Number : ";
	cin >> bno;
	b.setBookNumber(bno);

	cout << "\nEnter the Quanrity";
	cin >> quant;

	pair<Book, int> p1;
	p1.first = b;
	p1.second = quant;

	V_Book->push_back(p1);

	PrintBooks(&b, quant);


}
void Library::PrintBooks(Book *b, int quant)
{
	ofstream fout;
	
	
	fout.open("LibraryBooks.dat",ios::binary|ios::app);

	fout.write((char *)b,sizeof(Book));

	fout << quant;

	fout.close();

	
}

void Library::DisplayFileData()
{
	Book *b = new Book();
	int qty;

	ifstream fin;
	fin.open("LibraryBooks.dat");

	while (fin.read((char*)b, sizeof(Book)) && fin >> qty)
	{
		cout << "\nBook Name : " << b->getBookName();
		cout << "\nBook Number : " << b->getBookNumber();
		cout << "\nBook Author : " << b->getBookAuthorName();
		cout << "\nQuantity : " << qty;

	}

	fin.close();

	
}
void Library::ModifyBook()
{

}

void Library::DeleteBook()
{

}

void Library::IssueBookToStudent()
{

}

void Library::TakeReturnedBookFromStudent()
{

}
