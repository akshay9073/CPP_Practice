#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s="Programming";
	
	cout<<s<<endl;
	cout<<"Size of String : "<<s.size()<<endl;
	cout<<"Length of the string : "<<s.length()<<endl;
	
	string str="";
	cout<<str<<endl;
	if(str.empty())
	cout<<"String is empty "<<endl;
	else
	cout<<"String is not empty"<<endl;
	
	string c="Clear";
	cout<<"String is : "<<c<<endl;
//	c.clear();
	cout<<"String after clear : "<<c<<" and length is : "<<c.length()<<endl;
	
	cout<<" String before append : "<<c<<" "<<endl;
	c.append(" Exam");
	c+=" Exam2";
	cout<<" String after append : "<<c<<endl;
	
	s.push_back('.');
	s.push_back('.');
	s.push_back('.');
	
	cout<<" push_back str : "<<s<<endl;
	
	cout<<" Pop back function : "<<endl;
	s.pop_back();
	s.pop_back();
	s.pop_back();
	cout<<" String after Pop : "<<s<<endl;
	
	cout<<s.at(2);
	cout<<s.at(4);
	cout<<s[5];
	cout<<s[0];
	
	cout<<" Front char : "<<s.front()<<endl;
	cout<<" Back char : "<<s.back()<<endl;
	
	cout<<s.substr(3,4)<<endl;
	
	cout<<s.find("gram")<<endl;
	if(!s.find("gram"))
	cout<<" Not found"<<endl;
	
	string a="apple banna apple";
	cout<<a.rfind("apple")<<endl;
	
	a.replace(6,5,"C++");
	cout<<a<<endl;
	
	a.insert(5," Kiwi");
	cout<<a<<endl;
	
	string s1="apple";
	string s2="apple";
	
	cout<<s1.compare(s2)<<endl;
	if(!s1.compare("king"))
	cout<<"string are same "<<endl;
	else
	cout<<" string are not same"<<endl;
	
	string num="123";
	int n=stoi(num);
	cout<<"number is : "<<n+10<<endl;
	
	int m=100;
	string z=to_string(m);
	cout<<z +" Rupees"<<endl;
	
	string source="Hello";
	string target="World";
	
	source.swap(target);
	
	cout<<source<<endl;
	cout<<target<<endl;
	
	source.resize(3);
	cout<<source<<endl;
		
	cout<<" Read lines using getline "<<endl;
	string name;
	
	getline(cin,name);
	cout<<name;
	
	
	
	return 0;
	
	
}
