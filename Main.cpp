#include <iostream>
#include <cstring>
#include "Library.h"


int main() {
	Library lyb;
	Book book1("Chehov", "Chaika", 1, 1879); 
	Book book2("Antonov", "Registr", 2, 1987);
	Book book3("MarkTwen", "Mobbi Dec", 3, 1856);
	Book book4("delete_MarkTwen", "Mobbi Dec2", 4, 1856);
	lyb.addBook(book1);  
	lyb.addBook(book2);  
	lyb.addBook(book3);
	lyb.addBook(book4);
	lyb.deleteBook(4);
	lyb.changeBook(3, "Crime and Punishment");
	Subscriber subs1(1, "Andrey","Chaika"); 
	Subscriber subs2(2, "Olegy", "Registr");  
	Subscriber subs3(3, "Zergey","Mobbi Dec");
	Subscriber subs4(4, "Artur", "Mobbi Dec2");
	lyb.addSubcriber(subs1); 
	lyb.addSubcriber(subs2); 
	lyb.addSubcriber(subs3);
	lyb.addSubcriber(subs4);
	lyb.TakeBookSubcriber("Chaika");
	lyb.TakeBookSubcriber("Registr"); 
	lyb.TakeBookSubcriber("Mobbi Dec");
	lyb.TakeBookSubcriber("Mobbi Dec2");
	std::cout << "As we can see the 'remove' and 'replace' functions work right" << std::endl;
	return 0;
}