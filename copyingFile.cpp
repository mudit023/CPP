// ************** Copying using file handling**************
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
  ifstream fin("D:\\study\\CSE\\C++\\handling.cpp");
  ofstream fout("D:\\study\\CSE\\C++\\copied_handling_program.txt");
  char read;
  while (!fin.eof())
  {
    fout.put(read);
    read=fin.get();
  }
  fin.close();
  fout.close();
}