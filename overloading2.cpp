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

friend ostream& operator<<(ostream &, Distance);

friend void operator>>(istream &, Distance & );
};

void operator>>(istream &i, Distance &d)
{
cin>>d.km>>d.meter;
}

ostream & operator<<(ostream &o, Distance d )
{
o<<endl<<"Km = "<<d.km<<" and meters = "<<d.meter;
return cout;
}


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
cin>>d1;
cin>>d2;


cout<<d1<<d2;



}