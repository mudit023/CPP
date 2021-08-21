#include <iostream>
using namespace std;

int main()
{
  struct Distance{
    int feet;
    float inches;
  };
  struct Room{
    Distance length;
    Distance width;
    Distance height;
  };

  Room study;
  study.length.feet=24;
  study.length.inches=2.6F;
  study.width.feet=20;
  study.width.inches=8.0F;
  study.height.feet=12;
  study.height.inches=10.0F;

  float total_length = study.length.feet + (study.length.inches/12);
  float total_width = study.width.feet + (study.width.inches/12);
  float total_height = study.height.feet + (study.width.inches/12);
  
  float volume = total_length*total_width*total_height;
  cout<<"Length of the room: "<<total_length<<endl;  
  cout<<"Width of the room: "<<total_width<<endl;  
  cout<<"Height of the room: "<<total_height<<endl;
  cout<<"Volume of the room is: "<<volume<<" f^3";  

}