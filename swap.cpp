// *************** Without using the third variable********************8
#include<iostream>
using namespace std;
int main()
{
  int a=12, b=32;
  cout<<"Initially a = "<<a<<", b = "<<b<<endl;
  a = a+b;
  b = a-b;
  a = a-b;
  cout<<"After swaping a = "<<a<<", b = "<<b;
}