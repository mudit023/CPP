// ******************Using pointer and address of operator in different ways in a array*******************8
#include<iostream>
using namespace std;
int main()
{
  int a[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
  char c[4][10]={"Vikas","DEF","ATUL"};
  cout<<"&a: "<<&a<<"  ";
  cout<<"*(&a): "<<*(&a)<<"  ";
  cout<<"*a: "<<*a<<"  ";
  cout<<endl;
  cout<<"*a[3]: "<<*a[3]<<"  ";
  cout<<"a[1]: "<<a[1]<<"  ";  //this is for integer array. This will print the address of the 2nd row index=1.
  cout<<"c[1]: "<<c[1]<<"  "; // but in case of char c[1] will print the array of char stored at 2nd row or index=1.
  cout<<"c[1][0]: "<<c[1][0]<<"  ";
  cout<<"*c[1]: "<<*c[1]<<"  "; 
  cout<<endl;
  cout<<"*(&a)+1: "<<*(&a)+1<<"  ";
  cout<<"a+1: "<<a+1<<"  ";
  cout<<"*(*(&a)+1): "<<*(*(&a)+1)<<"  ";
  cout<<"*(*(*(&a)+1)): "<<*(*(*(&a)+1))<<"  ";
  cout<<"*(*a+5): "<<*(*a+5)<<"  ";
}
