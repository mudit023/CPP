#include<iostream>
using namespace std;

class Distance
{
int km;
int meter;
public:
void input()
{
cout<<endl<<"Enter kms and meters ";
cin>>km>>meter;
}
void display()
{
cout<<endl<<"Km = "<<km<<" and meters = "<<meter;
}
// Distance operator+(Distance &z)
// {
// Distance r;
// r.km=km + z.km;
// r.meter=meter + z.meter;
// r.km+=r.meter/1000;
// r.meter%=1000;
// return r;
// }
Distance operator+(int a)
{
Distance r;
r.km=km + a;
r.meter=meter + a;
r.km+=r.meter/1000;
r.meter%=1000;
return r;
}
Distance operator-()
{
Distance r;
r.km = -km;
r.meter= -meter;
return r;
}

friend Distance operator+(int, Distance &);
friend Distance operator+(Distance &, Distance &);
friend Distance ostream(Distance &){
  Distance r;
// ***************Define cout for User Defined DataType*********************
}
};
Distance operator+(int a, Distance &d)
{
Distance r;
r.km = 2 + d.km;
r.meter= 2 + d.meter;
r.km += r.meter/1000;
r.meter%=1000;
return r;
}
Distance operator+(Distance &r1, Distance &r2)
{
Distance d;
d.km= r1.km + r2.km;
d.meter= r1.meter+ r2.meter;
d.km += d.meter/1000;
d.meter%=1000;
return d;
}


int main()
{
Distance d1, d2, d3; //d1 is local to main
d1.input(); //2 300
// d2.input();
// d3 = d1+d2;
// d3.display();

}