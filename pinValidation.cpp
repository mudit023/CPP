//  ***********************Using DO-WHILE loop to check for the correct pin *****************************
#include<iostream>
using namespace std;

int main()
{
  int userPin = 2304, pin, errorCount = 0;
  do
  {
    cout << "Enter your pin: ";
    cin >> pin;
    if(pin == userPin){
      cout << "You have entered correct pin";
      break;
    }
    else
    {
      cout << "Pin is incorrect, try again.\n";
      if (errorCount < 1)
        cout << "You have made "<< errorCount+1 << " incorrect attempt(s).\n";
      else
      cout << "This is your last attempt\n";      
    }
    ++errorCount;
  } while (errorCount<3);
  
}