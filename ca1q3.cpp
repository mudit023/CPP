/*Write a single function which can calculate product of two numbers or three numbers.*/
#include<iostream>
using namespace std;
int product(int a, int b, int c=1);

int main()
{
  int a,b,c;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  cout<<a<<" * "<<b<<" is: "<<product(a,b);
  cout<<endl;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  cout<<a<<" * "<<b<<" * "<<c<<" is: "<<product(a,b,c);
}
int product(int a, int b, int c)
{
  return a*b*c;
}