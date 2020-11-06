#include "pch.h"
#include "Library.h"


Library::Library(void)
{
	Name = "";
	Author = "";
	Quantity = 0;
	QuantityOH = 0;
}

Library::Library(string N, string A, int Q, int QOH)
{
	Name = N;
	Author = A;
	Quantity = Q;
	QuantityOH = QOH;
}


Library::~Library()
{
}

//Конструктор копирования
Library::Library(const Library & lib)
{
	Name = lib.Name;
	Author = lib.Author;
	Quantity = lib.Quantity;
	QuantityOH = lib.QuantityOH;
}

//Перегрузка операции присваивания
Library & Library::operator=(const Library &c)
{
	if (&c == this) return *this;
	Name = c.Name;
	Author = c.Author;
	Quantity = c.Quantity;
	QuantityOH = c.QuantityOH;
	return *this;
}

void Library::SetName(string N)
{
	Name = N;
}

void Library::SetAuth(string A)
{
	Author = A;
}

void Library::SetQuant(int Q)
{
	Quantity = Q;
}

void Library::SetQuantOH(int QOH)
{
	QuantityOH = QOH;
}


//Перегрузка потокового ввода
istream & operator>>(istream & in, Library & c)
{
	in >> c.Name >> c.Author >> c.Quantity >> c.QuantityOH;
	return in;
}

//Перегрузка потокового вывода
ostream & operator<<(ostream & out, const Library & c)
{
	out << "Название книги: " << c.Name 
		<< "\nАвтор: " << c.Author 
		<< "\nКоличество книг: " << c.Quantity 
		<< "\nКоличество книг на руках: " << c.QuantityOH;
	return out;
}
