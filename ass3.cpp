#include<iostream>
using namespace std;
int febo(int);
int main()
{
int n;
febo(0);
return 0;
}
int febo(int a)
{
static int b=1;
int a;
int c; 

c=a+b;
cout<<c;
a=b;
b=c;

febo(b);
}


