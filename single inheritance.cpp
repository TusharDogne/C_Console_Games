#include<iostream>
using namespace std ;
class A
{
	public :
	int n1,n2;
	void get()
	{
		cout<<"Enter value of n1";
		cin>>n1;
		cout<<"Enter value of n2";
		cin>>n2;
	}
};
class B : public A 
{
	public:
			int sum;
		
		    void show()
			{
				sum=n1+n2;
			cout<<"\n Sum is "<<sum;
     }
};
int main ()
{
	B b;
	b.get();
	b.show();
}
