/* Create a class named Visitor. Include 3 private data members named name (string), gender (char) and 
age (int).
Include functions named initializeData – In this function, get the values of all the 3 data members from the 
user.
displayData() – In this function, display the personalized welcome message displaying name of the visitor 
along with his/her age.
countVisiters() – how many visitor objects have been created
compareNames() – compare the names of two visitors */
#include<iostream>
#include<string.h>
using namespace std;

class Visitor
{
  private:
    string name;
    char gender;
    int age;
    static int count;
    int visitorCount;
  public:
    Visitor();
    void initializeData(string, char, int);
    void displayData();
    void compareNames(Visitor );
    void countVisitor();
};
Visitor::Visitor()
{
  visitorCount=++count;
}
int Visitor::count=0;
int main()
{
  string n; char g; int a;
  Visitor one;
  one.countVisitor();
  one.initializeData(n,g,a);
  one.displayData();
  Visitor two;
  two.countVisitor();
  two.initializeData(n,g,a);
  two.displayData();
  one.compareNames(two);
}
void Visitor::countVisitor()
{
  cout<<"Visitor number: "<<visitorCount<<endl;
}
void Visitor::initializeData(string x, char y, int z)
{
  cout<<"Enter your name: ";
  cin>>x;
  name=x;
  cout<<"Gendre(M/F): ";
  cin>>y;
  gender=y;
  cout<<"Enter your age: ";
  cin>>z;
  age=z;
}
void Visitor::displayData()
{
  cout<<"Hello "<<name<<", welcome!"<<endl;
  cout<<"Your age is "<<age<<endl;
}
void Visitor::compareNames(Visitor v)
{
  int n=name.compare(v.name);
  if (n==0)
    cout<<"Names are same";
  else
    cout<<"Names are different";
}