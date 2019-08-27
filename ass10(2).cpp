#include<iostream>
using namespace std;

double average(int a[],int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
		sum += a[i];

	
return(sum/n);
}

int main()
{
	int a[]={1,2,3};
int n= sizeof(a);
	

	cout<<average(a,n)<<endl;
return 0;
	
}

