#include <iostream>
#include<string>
using namespace std;

int main()
{
  struct car{
    float price;
    int rank;
    string name;
  };
  struct car_company
  {
    car model;
  };
  
  car_company honda;
  honda.model.name="CIVIC";
  honda.model.rank=12;
  honda.model.price=12.4F;
  cout<<"Honda Car name: "<<honda.model.name<<endl;
  cout<<"Honda Car rank: "<<honda.model.rank;
  cout<<endl<<"Honda car price: "<<honda.model.price<<"L";
}