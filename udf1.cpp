#include<iostream>
using namespace std;

void print(int n);
int add(int n1, int n2);

int main()
{
  int a,b,sum;
  cout<<"Enter n1 "<<endl;
  cin>> a;
  cout<<"Enter n2" <<endl;
  cin>> b;
  print(a);
  print(b);
  sum = add(a,b);
  print(sum);
  return 0; 
}

void print(int n)
{
  cout<<"Your number is: "<<n<<endl;
  return ;
}

int add(int n1, int n2)
{
  return n1+n2;
}