#include<iostream>

#include<set>

using namespace std;

int main()
{
	set<int> num;

num.insert(1);
num.insert(20);
num.insert(3);
num.insert(40);

for(int n:num)
cout<<n<<endl;

cout<<" \nSort descending"<<endl;

set<int,greater<int>> numd;

numd.insert(1);
numd.insert(5);
numd.insert(4);
numd.insert(7);
numd.insert(6);

for(int d:numd)
cout<<d<<endl;


cout<<"\n Unique in set "<<endl;
set<int> unique={1,2,5,4,8,9,2,4,3};

for(int u:unique)
cout<<u<<endl;

unique.erase(5);
unique.erase(9);

for(int u:unique)
cout<<u<<endl;

unique.clear();
cout<<unique.size()<<endl;
cout<<unique.empty()<<endl;


return 0;
}



