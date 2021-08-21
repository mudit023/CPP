#include<iostream>
#include<string.h>
using namespace std;

class Secure
{
  public:
  void setName()
  {
    string x;
    cout<<"Enter your name:";
    cin>>x;
    code=x;
  }
  string getName()
  {
    return code;
  }
  private:
  string code;
};

int main() //************** WHY THE RETURN TYPE NEEDS TO BE INTEGER********************************
{
  // cout<<"Enter your name: ";
  // string n;
  // cin>>n;
  Secure message;
  message.setName();
  cout<<message.getName()<<endl;
}