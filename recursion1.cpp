// ***********************************BACK TRACKING & RECURSION*******************************
#include<bits/stdc++.h>
using namespace std;
//void print(char c, int n)
//{
// for(int i=0; i<n;i++)
// {
// cout<<c;
// }
// cout<<endl;
//}

void print(int m,int n)
{
for(int i=0;i<m;i++)
cout<<"*";
if(m<n)
print(m+1,n);
for(int i=0;i<m;i++)
cout<<"*";
}
int main()
{
int m,n;
cin>>m>>n; //0, 5
//cout<<"***********";
print(m,n);
}