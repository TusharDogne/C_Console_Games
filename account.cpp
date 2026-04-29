#include <iostream>
using namespace std;
#include<string>
class bank
{
  public:
int ac_no;
char name[20];
char  type[3];
int balance;
int temp;
void assign()
{
cout<<"\nenter the account number";
cin>>ac_no;
cout<<"\nenter the depositor name";
cin>>name;
cout<<"\nenter the type of account";
cin>>type;
cout<<"\nenter the balance";
cin>>balance;
}
void disp_name_bal()
{
cout<<"\n NAME    :"<<name;
		cout<<"\nBALANCE :"<<balance;
	}
	void withdraw()
	{
		cout<<"\nenter the withdraw amount";
		cin>>temp;
		if(temp<=balance)
		{
			cout<<"\nTransaction completed Sucessfully";
			balance=balance-temp;
			cout<<"\nAccount Balance :"<<balance;
		}
		else{
			cout<<"\nINSUFFICIENT Balance";
		}
	}
	void deposit()
	{
		cout<<"\n enter the deposit amount";
		cin>>temp;
		balance=balance+temp;
		cout<<"\nTransaction completed Sucessfully";
			cout<<"\nAccount Balance :"<<balance;
}
};
int main() {
  std::cout << "Hello World!\n";
	bank a;
	a.assign();
	a.disp_name_bal();
	a.withdraw();
	a.deposit();
}

