#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"Enter the lenght of your sides: ";
  cin>>a>>b>>c;
  if (a==b && b==c)
  {
    cout<<"Triangle with sides "<<a<<", "<<b<<", "<<c<<" is equilateral";
  }
  else if(a!=b && b!=c && a!=c)
  {
    cout<<"Triangle with sides "<<a<<", "<<b<<", "<<c<<" is scanlene";
  }
  else
  cout<<"Triangle with sides "<<a<<", "<<b<<", "<<c<<" is isosceles";
}