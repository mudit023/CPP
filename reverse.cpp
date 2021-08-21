//  ******************** REVERSING digits of a number *******************
#include<iostream>
using namespace std;

int main()
{
  int n, remainder, rev=0;
  cout << "Enter the number: ";
  cin >> n;
  if (n>-10 && n<10)
    cout << "You have entered one digit number";
  else
  {
    while (n!=0)
    {
      remainder = n % 10;
      rev = rev * 10 + remainder;
      n /= 10;
    }
    cout << "Reversed number: " << rev; 
  }
}
