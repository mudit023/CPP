//  **********************Function overloading program************************8
#include<iostream>
using namespace std;
//using two functions with same names

int add( int a, int b); 
float add( int a, float b);

int main()
{
  int n1=5;
  float n2=5.9;
  // int n3=20;
  cout<<"Sum is:"<<" "<<add(n1,n2);
}

int add(int a,int b)
{
  return a+b;
}
float add(int a, float b)
{
  return a+b;
}