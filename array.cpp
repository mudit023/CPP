#include<iostream>
using namespace std;
int main()
{
int a[3][5];
cout<<"\n&a= "<<(int)&a;
cout<<"\n&a+1 "<<(int)(&a+1);

cout<<endl<<endl;
cout<<"\na= "<<(int)a; //address of first row
cout<<"\na+1 "<<(int)(a+1); //address of second row

cout<<endl<<endl;
cout<<"\n*a= "<<(int)*a; //address of one cell
cout<<"\n*a+1 "<<(int)(*a+1); //address of second cell


cout<<endl<<endl;
cout<<"\n**a= "<<(int)**a; //value at first cell
cout<<"\n**a+1 "<<(int)*(*a+1); //value at second cell


// cout<<"\na= "<<a;
// cout<<"\n&a[0][0]= "<<&a[0][0];
// cout<<"\na[0]= "<<a[0];
// cout<<endl<<endl;
// cout<<"\n&a+1= "<<&a+1;
// cout<<"\na+1= "<<a+1;
// cout<<"\n&a[0][0]+1= "<<&a[0][0]+1;
// cout<<"\na[0]+1= "<<a[0]+1;
}