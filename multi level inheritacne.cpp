#include<iostream>
using namespace std ;
class A
{
	public :
	int n1;
	void get()
	{
		cout<<"Enter value of n1";
		cin>>n1;
	}
};
class B : public A 
{
	public:
			int n2;
		    void get1 ()
			{
				cout<<"Enter value of n2";
	        	cin>>n2;
	        }
     
};
class C :  public B
{
	public :
	int sum;
	void show()
{
	sum = n1+n2;
	cout<<" Sum is :"<<sum;
}
	
};
int main ()
{
	C c;
	c.get();
	c.get1();
	c.show();
}
