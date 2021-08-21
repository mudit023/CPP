#include<iostream>
#include<string.h>
using namespace std;
class Account
{
int accno;
char accholdername[30];
int balance;
static int count;
public:
Account();
Account(char *, int );
void getdata();
void setdata();
void display();
void setname(char *);
int getbalance();

void withdraw(int );
void deposit(int d)
{
balance+=d;
}
};
void Account::display()
{
cout<<endl<<"Account no is "<<accno<<" name is "<<accholdername<<" and balance is "<<balance;
}
Account::Account() //default constructors
{
balance=0; strcpy(accholdername,""); accno=++count;
}

Account::Account(char *p,int b) //parametrized constructor
{
accno=++count;strcpy(accholdername,p); balance=b;
}
void Account::setname(char *p)
{
strcpy(accholdername,p);
}

int Account::getbalance()
{
return balance;
}

void Account::withdraw(int temp)
{
if(balance>=temp)
balance=balance-temp;
else
cout<<"\nInsufficient balance";
}

int Account::count=1000;
int main()
{
Account A;
A.display();
A.setname("Vikas");
A.display();
Account B("Pranav", 50000);
B.display();

cout<<endl<<B.getbalance();

cout<<endl;

int temp;
cout<<"Enter amount to withdraw ";
cin>>temp;
B.withdraw(temp);
B.display();

cout<<"Enter amount to deposit ";
cin>>temp;
B.deposit(temp);
B.display();
}