#include<iostream>
#include<fstream>
using namespace std;

class File
{
  char name[100];
  int marks;
  public:
  void getData(char n[], int m)
  {
    cout<<"Enter student's name: ";
    cin>>n;
    name[100]=n[100];
    cout<<"Enter marks: ";
    cin>>m;
    marks=m;
  }
  void display()
  {
    
  }
};

int main()
{
  char c;
  ifstream fin("D:\\study\\CSE\\C++\\file01.txt");
  cin>>c;
  fin>>c;
  ofstream fout("D:\\study\\CSE\\C++\\file01.txt");
  fout<<c;
  cout<<c;
}