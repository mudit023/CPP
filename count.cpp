#include<iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter your number: ";
  cin >> n;
  if (n==0)
    cout << "You have entered 0.\n";
  else
  {
    // if(n<0)
    //   n = -1 * n;
    int number = n;
    int counter = 0;
    while (number != 0)
    {
      number = number/10;
      ++counter;
    }
    cout << "There are " << counter << " digits in your number " << n << " .\n";
  }
  
}