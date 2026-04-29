#include<iostream>
#include<conio.h>
int main()
{

int largest(int,int,int);
cin<<"Enter 3 Integer Numbers\n";
int a,b,c;
cin>>a>>b>>c;
int result;
result=largest(a,b,c);
cout<<"\n\nLargest Value of Inputed is "<<result;

}
inline largest(int a,int b,int c)
{
int z;
z=(a>b)?((a>c)?a:c):((b>c)?b:c);
return(z);
}

