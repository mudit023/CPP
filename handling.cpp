// **************file handling**************
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
  // ************* Writing in the file *******************
  ofstream fout("D:\\study\\CSE\\C++\\myFirst.txt",ios::app);
  string dataIn;
  cout<<"Write what ever you like: "<<endl;
  getline(cin, dataIn);
  fout<<endl<<dataIn;

  // **************** Reading from the file ****************
  ifstream fin("D:\\study\\CSE\\C++\\myFirst.txt");
  char dataOut;
  cout<<"Reading this program file: "<<endl;
  while (!fin.eof())
  {
    dataOut=fin.get();
    cout<<dataOut;
  } 
}