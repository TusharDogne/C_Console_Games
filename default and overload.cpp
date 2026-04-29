#include<iostream>
using namespace std;

class DefaultOverload
{
	public;
     	void print(int x, int y=0)
	    {
		cout <<"printing integers:"<<x<<","<<y<<endl;
	    }   
	void print(double x,double y=0.0)
	{
		cout<<"printing double "<<x<<,<<y<<endl;
	}
};
int main ()
{
	DefaultOverload t1;
	t1.print(3,4);
	t1.print(3);
	ti.print(4.0,5.5);
	t1.print(6.7);
	
	return 0;
}
