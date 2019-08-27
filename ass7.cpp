#include<iostream>
using namespace std;
int main()
{	
int n, first=0,second=1, third;
cout<<first;
cout<<second;
for(int i=2;i<10;i++)
{
third=first+second;
cout<<" "<<third;
first=second;
second=third;
}
return 0;
}


