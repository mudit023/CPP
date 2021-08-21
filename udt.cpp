#include<iostream>
#include<string.h>
using namespace std;

struct me
{
  string name;
  int age;
  char gendre;
};
int main()
{
  me me1;
  me1.name="Mudit Mishra";
  cout << me1.name; 
}