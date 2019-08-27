#include<iostream>
using namespace std;
float rect(float,float);
int main()
{
float a,b;
cin>>a;
cin>>b;
cout<< rect(a,b);
}
float rect(float a,float b)
{
float area;
area=a*b;
return(area);
}

