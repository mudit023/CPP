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
  void getdata();
  void setdata();
  void display();
  void setname(char *);
};
void Account::display()
{
  cout<<endl<<"Account no is "<<accno<<" name is "<<accholdername<<" and balance is "<<balance;
}
  Account::Account() // Default Constructor
{
  balance=0; strcpy(accholdername,""); accno=++count;
}

void Account::setname(char *p)
{
  strcpy(accholdername, p);
}
int Account::count=1000;
int main()
{
  Account A;
  A.display();
  A.setname("Vikas");
  A.display();
}