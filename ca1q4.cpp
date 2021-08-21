#include<iostream>
using namespace std;
int main()
{
  int arr[]={10,23,45,56,82};
  int *p=arr;
  int *p1;
  int *p2;
  p1=(int *)300;
  p2=(int *)200;
  cout<<"pointer address: "<<p;
  cout<<endl<<"increment: "<<++p;
  cout<<endl<<"decrement: "<<--p;
  cout<<endl<<"addition: "<<(p=p+3);
  cout<<endl<<"substration: "<<(p=p-2);
  if (p1<p2)
  cout<<endl<<"p2 is greater than p1";
  else
  cout<<endl<<"p1 is greater than p2";
}