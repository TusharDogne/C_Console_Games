#include<iostream>
using namespace std;
class T
{
	private:
	int n1,n2;
	friend void get(T t);
	public:
		void show()
		{
			cout<<"\n enter n1:";
			cin>>n1;
			cout<<"\n enter n2:";
			cin>>n2;
			
	    }
};
void get(T t)
{
	int sum;
	sum=t.n1+t.n2;
	cout<<"\n SUM is ="<<sum;
}
int main()
{
	T t;
	t.show();
	get(t);
	
}
