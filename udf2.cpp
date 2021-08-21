#include<iostream>
using namespace std;
int add2(int , int );        // It is not necessary to write the name of the arrguments
int add3(int , int , int );

int main()
{
  int a,b,c,sum2,sum3;
  cout<<"Enter your first number:"<<endl;
  cin>>a;
  cout<<"Enter your second number:"<<endl;
  cin>>b;
  cout<<"Enter your third number:"<<endl;
  cin>>c;
  sum2=add2(a,b);
  sum3=add3(a,b,c);
  cout<<"sum of 2:"<<sum2<<endl;
  cout<<"sum of 3:"<<sum3<<endl;

}
int add2(int n1, int n2)
{
  return n1+n2;
}
int add3(int n1, int n2, int n3)
{
  return n1+n2+n3;
}