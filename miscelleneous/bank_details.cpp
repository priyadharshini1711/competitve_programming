#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct customer
{
	unsigned long int acc_no,adhar,ph;
	char name[30],addr[30];
	float bal;
}c[10];
static int k=0;
int i;
void create()
{
	int a,f=0;
	cout<<"enter your adhar no";
	cin>>a;
	for(int i=0;i<k;i++)
	{
		if(c[i].adhar==a)
		{
			f=1;
			cout<<"the user acount already exists";
		}
	}
	if(f==0)
	{
		cout<<"welcome to abc bank"
			<<"enter your details"<<"\n"
			<<"enter your name";
		cin>>c[k].name;
		cout<<"enter address"<<"\n";
		cin>>c[k].addr;
		cout<<"enter phone no"<<"\n";
		cin>>c[k].ph;
		cout<<"enter the amt to be deposited. note: your minimum deposit must not be below Rs.500"<<"\n";
		cin>>c[k].bal;
		cout<<"your account number is"<<"\n"<<c[k].acc_no++;
		c[k].acc_no=c[k].acc_no++;
		cout<<"your branch is nungambakkam"<<"\n";
		k++;
		cout<<k;
	}	
}
int deposit()
{
	int a;
	float amt;
		cout<<"enter the acc_no";
	cin>>a;
	for(i=0;i<=k;i++)
	{
		if(c[i].acc_no==a)
		{
			cout<<"enter the amt to be deposited";
			cin>>amt;
			c[i].bal=c[i].bal+amt;
		}
	}
	return 0;
}
int withdraw()
{
	int a;
	float amt;
		cout<<"enter the acc_no";
	cin>>a;
	for(i=0;i<=k;i++)
	{
		if(c[i].acc_no==a)
		{
			cout<<"enter the amt to be withdrawn";
			cin>>amt;
			if(amt>c[i].bal||amt>10000)
			cout<<"sorry! you cannot withdrw the money";
			else 
			c[i].bal=c[i].bal-amt;
		}
	}
	return 0;
}
void balance()
{
	int a;
	cout<<"enter the acc_no";
	cin>>a;
	for(i=0;i<=k;i++)
	{
		if(c[i].acc_no==a)
		{
			cout<<c[i].name<<"\n"
				<<c[i].acc_no<<"\n"
				<<c[i].adhar<<"\n"
				<<c[i].bal;
		}
		else 
		continue;
	}
}
int main()
{
	c[k].acc_no=12345678;
	int ch,ch1;
	do
	{
		cout<<"enter your choice"<<"\n"
			<<"1.create account"<<"\n"
			<<"2.deposit"<<"\n"
			<<"3.withdraw"<<"\n"
			<<"4.balance"<<"\n"
			<<"5.exit";
		cin>>ch;
		switch(ch)
		{
			case 1:create();
			case 2:deposit();
			case 3:withdraw();
			case 4:balance();
			default:break;		
		}
		cout<<"press 1 to cont";
		cin>>ch1;
	}while(ch1==1);
	return 0;
}
