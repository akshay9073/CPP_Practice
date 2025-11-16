#include<iostream>

#include "Book.h"

using namespace std;

int main()
{
	Book b1("Akshay","The King","Sci-Fi",302);
	
	cout<<"Book-1 "<<endl;
	cout<<"Author : "<<b1.getAuthor()<<endl
	<<"Title : "<<b1.getTitle()<<endl
	<<"Genre : "<<b1.getGenre()<<endl
	<<"Num of Pages : "<<b1.getnumPages()<<endl;
}
