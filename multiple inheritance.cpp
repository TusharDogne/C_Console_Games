#include<iostream>
using namespace std;
class A
{
	public :
		int n1;
		void get()
		{
			cout<<"\n Enter value of n1--";
			cin>>n1;
		}
};
class B
{
	public :
		int n2;
		void get1()
		{
			cout<<"\n Enter value of n2";
			cin>>n2;
		}
};
class C : public A , public B
{
	public : 
	    int sum;
	    void show()
	    {
	    	sum = n1 + n2 ;
	    	cout<<"\n The Sum is :"<<sum;
		}
};
int main()
{
	C c;
	c.get();
	c.get1();
	c.show();
}
