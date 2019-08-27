#include<iostream>
using namespace std;
int main()
{
int n,a[100];
cout<<"Enter total number ";
cin>>n;
cout<<"Enter Numbers ";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
cout<<a[i]*2<<" ";
}
return 0;
}
