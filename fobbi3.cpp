#include<iostream>
using namespace std;
int recuf(int);
int main()
{
int n,y,i=0;
cout<<"enter the limit of fibonacci";
cin>>n;
while(i<n)
{
y=recuf(i);
cout<<y<<" ";
i++;
}
return 0;
}

int recuf(int n)
{
if(n==0||n==1)
{
return n;
}
else
{
return(recuf(n-1)+recuf(n-2));
}
}
