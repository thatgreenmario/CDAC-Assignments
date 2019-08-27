#include<iostream>
using namespace std;
int main()
{
int n,sum=0,avg,a[100];
cout<<"Enter total number";
cin>>n;
cout<<"Enter numbers";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i =0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
cout<<"Average "<<avg;
return 0;
}
