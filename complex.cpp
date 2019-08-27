#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;

	public:
		Complex()
			{
				real;
				img;
			}
		void accept()
			{
				cout<<"Enter Real part : ";
				cin>>real;
				cout<<"Enter Imaginary part : ";
				cin>>img;
			}
	
		void display()
			{
				cout<<"\nReal Part: "<<real;
				cout<<"\nImg Part: "<<img<<"\n";
			}
};
int main ()
{
	Complex a;
	a.accept();
	a.display();

	return 0;
}


	
