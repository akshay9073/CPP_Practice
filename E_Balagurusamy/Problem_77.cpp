#include<iostream>
#include<cstring>

using namespace std;

class media
{
	protected:
		char title[50];
		float price;
	public:
		media(char *s, float a)
		{
			strcpy(title,s);
			price=a;
		}
		virtual void display(){
		}
};

class book:public media
{
	int pages;
	public:
		book(char *s,float a,int p):media(s, a)
		{
			pages=p;
		}
		void display();
};

class tape:public media
{
	float time;
	public:
		tape(char *s, float a, float t):media(s,a)
		{
			time=t;
		}
		void display();
};

void book::display()
{
	cout<<" \n Title : "<<title;
	cout<<" \nPages  : "<<pages;
	cout<<" \nPrice  : "<<price;
}

void tape::display()
{
	cout<<" \n Title : "<<title;
	cout<<" \n Play time : "<<time<<" mins";
	cout<<" \n price : "<<price;
}

int main()
{
	char *title=new char[30];
	float price,time;
	
	int pages;
	
	cout<<"\n Enter Book Details : "<<endl;
	cout<<" Title : ";cin>>title;
	cout<<" Price : ";cin>>price;
	cout<<" Pages : ";cin>>pages;
	
	book book1(title,price,pages);
	
	//Tape details
	cout<<"\n Enter Tape Details : "<<endl;
	cout<<" Title : ";cin>>title;
	cout<<" Price : ";cin>>price;
	cout<<" Time  : ";cin>>time;
	
	tape tape1(title,price,time);
	
	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;
	
	cout<<" Media Details  "<<endl;
	
	list[0]->display();
	list[1]->display();
	
	return 0;
}
