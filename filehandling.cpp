#include<iostream>
#include<fstream>
using namespace std;

int main()
{
char filename[100];
cout<<"Enter the file name along with path ";
cin>>filename;
ifstream fin(filename);
if(fin.is_open())
{
char c;
c=fin.get();
while(!fin.eof())
{
cout<<c;
c=fin.get();
}
fin.close();
}
else
{
cout<<"Cannot work on file";
}
}