// ********************************PRINTING THIS PATTERN USING RECURSION**********************

#include<iostream>
using namespace std;
void draw(int h);

int main(void)
{
  cout << "Enter the height of the pyrimid: ";
  int height;
  cin >> height;
  draw(height);
}

void draw(int h)
{
  if (h==0)
  {
    return;
  }
  draw(h-1);
  for (int i = 0; i < h; i++)
  {
    cout << "#";
  }
  cout << "\n";
  
}
