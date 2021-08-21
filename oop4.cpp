// Create a class Test with two private integer data members: x and y and one member function: getdata() for taking input of x and y. Create two non-member friend functions: task1() and task2() to class Test, such as task1() is displaying squares of integers from 1 to x and task2() is finding the sum of all integers from 1 to y.

#include<iostream>
using namespace std;

class Test
{
  private:
    int x,y;
  public:
    void getData(int a, int b)
    {
      cout<<"Enter x: ";
      cin>>a;
      x=a;
      cout<<"Enter y: ";
      cin>>b;
      y=b;
    }
    friend void task1(Test);
    friend void task2(Test);
};

int main()
{
  int a,b;
  Test test1;
  test1.getData(a,b);
  task1(test1);
  task2(test1);
}
  void task1(Test t1)
    {
      for (int i = 1; i <=t1.x; i++)
      {
        int sqr;
        sqr=i*i;
        cout<<sqr<<" ";
      }
      cout<<endl;
    }
  void task2(Test t2)
    {
      int sum=0;
      for (int i = 1; i <= t2.y; i++)
      {
        sum+=i;
      }
      cout<<sum<<endl;
    }