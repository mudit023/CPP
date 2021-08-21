/* Write a program to enter n elements in an array and find the sum of all those numbers which don’t 
have any duplicate element.*/
#include<iostream>
using namespace std;
int arrSum(int arr[], int n);
void bubbleSort(int, int);

int main()
{
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int array[size];
  cout<<"Enter array elements: \n";
  for (int i = 0; i < size; i++)
  {
    cin>>array[i];
  }
  cout<<"The sum is: "<<arrSum(array,size);
}
void bubbleSort(int arr[], int n)
{
  int i,j,swap;
  for ( i = 0; i < n-1; i++)
  {
    for (j = 0; j < n-i-1; j++)
    {
      if (arr[j]>arr[j+1])
      {
        swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;
      }
      
    }
    
  }
}
int arrSum(int arr[], int n)
{
    bubbleSort(arr ,n);

    int sum = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] != arr[i+1])
          sum = sum + arr[i];
        else
          ++i;
    }
    return sum;
}