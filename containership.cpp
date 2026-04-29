#include<iostream>
using namespace std;
class A
{
	public:
		void get()
		{
			cout<<"\n Base Class";
		}
};
class B
{
	A a;
	public:s
	B()
	{
		a.get();
	}
};
int main()
{
	B b;
}
