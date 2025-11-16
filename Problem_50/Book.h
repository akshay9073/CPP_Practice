#ifndef BOOK_H
#define BOOK_H

#include<string>

using namespace std;

class Book{
	
	public:
		Book(string author,string title,string genre,int numPages);
		string getAuthor();
		string getTitle();
		int getnumPages();
		string getGenre();
		
	private : 
		string author;
		string title;
		string genre;
		int numPages;
};

#endif

