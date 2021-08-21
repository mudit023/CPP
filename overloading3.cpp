#include <iostream>
using namespace std;
class A{
  int a[10];
  public:
  A(){
    for (int i = 0; i < 10; i++)
    {
      a[i]=i;
    }
  }
  int operator[](int n){
    return a[n];
  }
};
int main()
{
  A a1,a2;
  cout<<a1[2];
  cout<<a2[5];
}