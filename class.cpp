#include<iostream>
using namespace std;
class employee
{
    int id;
	char name[100];

public:
    void get()
{
	cout<<"Enter your ID :";
	cin>>id;
	cout<<"enter Your name :";
	cin>>name;
}
void show()
{
	cout<<"id is :"<<id;
	cout<<"name is :"<<name;
}
};
int main()
{
	employee E;
	E.get();
	E.show();
}


