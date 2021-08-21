#include<iostream>
using namespace std;

int main()
{
  int n,find,ind;
  static int position;
  int x=1;
  int set[n];
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the numbers of the array:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> set[i];
  }
  cout << "Enter the number you want to find in the array: ";
  cin >> find;
  for (int i = 0; i <=n-1; i++)
  {
    if(set[i]==find)
    {
      x=0;
      ind=i;
    }
  }
  if (x==0)
  {
    position=ind+1;
    cout << "Number is found at " << ind <<" index and " << position <<" position"; 
  }
  else
  cout << "Number not found in the array";
}