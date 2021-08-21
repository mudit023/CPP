//  ***************guess the number  using ternary operator **************************
#include<iostream>
using namespace std;

int main()
{
  int hostNumber, guessNumber;
  cout << "Host(1-5): ";
  cin >> hostNumber;
  system("cls"); //************this is used to hide the inputed host number************
  cout << "Guess(1-5): ";
  cin >> guessNumber;
  hostNumber==guessNumber ? cout << "You guessed it right!": cout << "Oops! wrong answer, the number was " << hostNumber; 
}