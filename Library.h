#pragma once
#include "I_library.h"
#include "Subscriber.h"
#include "Book.h"
#include <map>
#include <vector>
class Library : virtual public I_library
{
public:
	virtual	void  addBook (Book& book) override {
		_data_book.push_back({ book });
	}
	virtual	void deleteBook(int id) override {
		for(size_t i = 0; i < _data_book.size(); i++) // fix//fix update done (return stoped loop for
			if (_data_book[i].getID() == id)
				_data_book.erase({_data_book.begin() + i});
		return;
	}
	virtual	void changeBook(int id,const std::string& name) override {
		for (size_t i = 0; i < _data_book.size(); i++){
			if (_data_book[i].getID() == id)
				_data_book[i].setModifBook(name);
		}
	}
	virtual	void addSubcriber(Subscriber& subs) override {
		_data_subs.push({ subs });
	}
	// leetcode - easy
	// yandex interview razbor
	virtual	void TakeBookSubcriber(const std::string& name) override {
		Subscriber& s1 = _data_subs.front();
		//Book& b1 = _data_book.front(); // [1][2][3]
			for (size_t i = 0; i < _data_book.size(); i++) {
				if (s1.getWantedBook() == _data_book[i].getNameBook()) {
					_data_book.erase({ _data_book.begin() + i });
					_data_subs.pop();
					std::cout << "Plase take book" << std::endl;
					return;
				}
			}
			std::cout << "Book not found" << std::endl;
			_data_subs.pop();
		
	}
private:
	std::vector<Book> _data_book;
	std::queue<Subscriber> _data_subs;
};

