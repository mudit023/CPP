// ********************************************* FACTORIAL of a number **********************************************

#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
  int n,fac;
  cout<<"Enter the number to find the factorial:";
  cin>>n;
  fac=factorial(n);
  // factorial function fac==factorial(n);
  cout<<"Factorial of "<<n<<" is: "<<fac;
}
int factorial(int n)
{
  if (n>0)  //*****************BASE CASE condition**************************
  {
    return n*factorial(n-1);  //**************Recursion*********************
  }
  else  //****************Base case*******************
  return 1;
}