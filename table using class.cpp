#include<iostream>
using namespace std;
class Table
{ 
  int n;
  int i,table;
public:
	void get()
{   
    cout<<"Enter no.";
	cin>>n;
}
    void show()
{
	for(i=1;i<=10;i++)
	cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
};
int main()
{
    Table T;
    T.get();
    T.show();
}

