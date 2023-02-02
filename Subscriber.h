#pragma once
#include<cstring>
#include <iostream>
#include <queue>

class Subscriber
{
public:
	Subscriber(int id,const std::string& name, const std::string& name_wanted_book) : _id(id), _name(name),_name_wanted_book(name_wanted_book){}
	const std::string& getWantedBook() {
		return _name_wanted_book;
	}
private:
	const std::string _name_wanted_book;
	int _id;
	std::string _name;
};

