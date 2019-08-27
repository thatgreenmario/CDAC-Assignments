#include<iostream>
using namespace std;
int main()
{
        int n,sum=0,m;
        cin>>n;
        for(int i=0;i<4;i++)
        {
                m=n%10;
		sum=sum+m;
                n=n/10;
        }
        cout<<sum;
        //cout<<a;

        return 0;
}
                                                                                                                                                                                                         
