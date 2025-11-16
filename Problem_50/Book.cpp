#include <iostream>

#include "Book.h"

using namespace std;

Book::Book(string author,string title,string genre,int numPages)
{
	this->author=author;
	this->title=title;
	this->genre=genre;
	this->numPages=numPages;
}

string Book::getAuthor()
{
	return this->author;
}

string Book::getGenre(){
	
	return this->genre;
}

string Book::getTitle()
{
	return this->title;
}

int Book::getnumPages()
{
	return this->numPages;
}
