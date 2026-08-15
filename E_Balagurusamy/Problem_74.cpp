#include<iostream>

using namespace std;

class account
{
	int balance;
	public:
		account(int balance)
		{
			this->balance=balance;
		}
		void show()
		{
			cout<<" Balance is : "<<balance<<endl;
		}
};

int main()
{
	account a(1000);
	a.show();
	
	return 0;
}
