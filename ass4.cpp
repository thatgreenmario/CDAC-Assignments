#include<iostream>
using namespace std;
int bin(int);
int main()
{
int n,i=0,a;
cout<<"Enter number";
cin>>n;
bin(n);
return 0;
}
int bin(int n)
{
while(1)
{
if(n<=0)
{
exit(0);
}
int a;
a=n%2;
cout<<a;

bin(n=n/2);
}
}


