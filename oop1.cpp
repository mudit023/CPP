// *******************************ACCESSING data directly****************************
// ******************************Using PUBLIC class only*****************************
#include<iostream>
#include<string>
using namespace std;

class Myself
{
  public:
  string name="Mudit Mishra";
  void outPut()
  {
    cout<<"Your name is: "<<name<<endl;
  }
};

int main()
{
  Myself Mudit;
  cout<<Mudit.name<<endl;
  Mudit.outPut();
}