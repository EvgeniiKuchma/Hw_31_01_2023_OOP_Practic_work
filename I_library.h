#pragma once
#include "Subscriber.h"
#include "Book.h"

class I_library {
public:
virtual ~I_library() {}
virtual	void addBook(Book& book) = 0;
virtual	void deleteBook(int id) = 0;
virtual	void changeBook(int id,const std::string& name) = 0;
virtual	void addSubcriber(Subscriber& subs) = 0;
virtual	void TakeBookSubcriber(const std::string& name) = 0;

};