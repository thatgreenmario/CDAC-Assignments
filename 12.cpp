#include<iostream>
using namespace std;
 int main()
{
  int r=0;
  int a,b;
  cout<<"Enter two numbers :";
  cin>>a>>b;
  for(int i=0;a>0&&b>0;i++)
  {
    int p=a%10;
        a=a/10;
        
    int q=b%10;
        b=b/10;
    
     r=r+abs(p-q);
  }  
cout<<r; 
}
