#include <iostream>
using namespace std;

int main()
{
  struct Distance
  {
    int feet;
    float inches;
  };
  
  Distance d1,d2;
  d1={11,2.5};
  d2={2,6.7};
  Distance d3;
  d3.inches= d1.inches + d2.inches; // We cannot add d1 and d2 like d1 + d2 because  the + operator is not defined to work with User Defined Data types
  d3.feet=0;
  if (d3.inches>=12.0)
  {
    d3.inches-=12.0;
    d3.feet++;
  }
  d3.feet=d1.feet+d2.feet;
  cout<<"Distance of d1: "<<d1.feet<<"\' "<<d1.inches<<"\""<<endl; 
  cout<<"Distance of d2: "<<d2.feet<<"\' "<<d2.inches<<"\""<<endl; 
  cout<<"Distance of d1+d2: "<<d3.feet<<"\' "<<d3.inches<<"\""<<endl; 
}