#include<iostream>

using namespace std;

class item
{
	private:
		int item[100];
		float cost[100];
		int count=0;
		
	public:
		void cnt(void)
		{
			count=0;
		}
		
		void get_item();
		void display_item();
		void remove_item();
		float total();
};

void item::get_item()
{
			cout<<"enter the item code : "<<endl;
			cin>>item[count];
			cout<<"Enter the item cost : "<<endl;
			cin>>cost[count];
			
			count++;
}

void item::display_item()
{
	cout<<"\nShopping list is as below : "<<endl;
	cout<<"Item "<<"\t"<<"Cost"<<endl;
	cout<<"======================================"<<endl;
	
	for(int i=0;i<count;i++)
	{
		cout<<item[i]<<" \t"<<cost[i]<<endl;
	}
	cout<<"======================================"<<endl;
}

void item::remove_item()
{
	int a;
	cout<<"Enter the item code : "<<endl;
	cin>>a;
	
	for(int i=0;i<count;i++)
	if(item[i]==a)
	{
		cost[i]=0;
		item[i]=NULL;
	}
}

float item::total()
{
	float sum=0;
	for(int i=0;i<count;i++)
	sum+=cost[i];
	
	return sum;
}



int main()
{
	item i;
	i.cnt();
	i.get_item();
	i.display_item();
		i.get_item();
	i.remove_item();
		i.display_item();
		
	cout<<"Total is : "<<i.total();
}
