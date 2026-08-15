#include<iostream>

using namespace std;

class item
{
	int code;
	float price;
	public:
		void getdata(int a, float b)
		{
			code=a;
			price=b;
		}
		void show()
		{
			cout<<" Code is : "<<code
			<<" Price is : "<<price<<endl;
		}
		
};

int main()
{
	item x;
	item *ptr;
	
	ptr=&x;
	
	cout<<" \n Using -> operator "<<endl;
	ptr->getdata(10,20.5);
	ptr->show();
	
	
	cout<<" \n Using . operator "<<endl;
	(*ptr).show();
	
	item *pttr=new item;
	
	
	cout<<" \n Using new keyword "<<endl;
	pttr->getdata(9,9.5);
	pttr->show();
	
	return 0;
	
	
}

