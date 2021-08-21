#include<iostream>
using namespace std;

int main()
{
  int target,mid,ind,flag=1;
  int start=0,end=6;
  int array[]={12,32,38,47,53,65,98};
  cout <<"Enter the number you want to find out in the sorted array:\n";
  for (int i = 0; i < 7; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
  cin >> target;
  while (start<=end)
  {
    mid = (start+end)/2;
    if (array[mid]==target)
    {
      flag=0;
      ind=mid;
      break;
    }
    else if(array[mid]<target)
    {
      start=mid+1;
    }
    else
    {
      end=mid-1;
    }    
  }
  if (flag==0)
  {
    cout<<"Number found at the index: " <<ind;
  }
  else
  cout << "Number not found!"; 
}