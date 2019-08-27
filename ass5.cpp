#include<iostream>
using namespace std;
int run(int);
int main()
{
int n;
cout<<"Enter number";
cin>>n;
run(n);
return 0;
}

int run(int a)
{
//int a=0;
int b,sum=0;
cout<<"Enter number"<<" ";
cin>>b;
sum=a+b;
cout<<"sum :"<<sum<<" ";
if(sum>=100)
{
cout<<"Account Full";
exit(0);
}
run(sum);

}



