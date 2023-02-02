#pragma once
#include <iostream>

class Book
{
public :
	Book(const std::string& name_avtor, const std::string& name_book, int id_book, int year) : _name_avtor(name_avtor),
		_name_book(name_book), _id_book(id_book), _year(year), _book_contents("book_contents") {};
	int getID() const {
		return _id_book;
	}
	void setModifBook(std::string name_book) {
		_name_book = name_book;
	}
	const std::string& getNameBook() const {
		return _name_book;
	}
private:
	std::string _name_avtor;
	std::string _name_book;
	std::string _book_contents;
	int _id_book;
	int _year;
};

