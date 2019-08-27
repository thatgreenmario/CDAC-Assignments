#include<iostream>
#include<cstring>
using namespace std;
class employee
{
	int empid;
	char name[20];
	float sal;

	public:

	employee()
	{
		empid=0;
	strcpy(name,"null");
		sal=0;
	}

	employee(int x,float y)
	{
		empid=x;
		sal=y;
	}

	void  accept()
	{
		cout<<"Enter Employee ID : ";
		cin>>empid;
		cout<<"Enter Employee Name : ";

		cin>>name;
//		strcpy(name,


		cout<<"Enter Employee Salary : ";
		cin>>sal;
	}

	void display()
	{
		cout<<"Employee ID : "<<empid<<endl;
		cout<<"Employee Name : "<<name<<endl;
		cout<<"Employee Salary : "<<sal<<endl;
	}
};
int main()
{
	employee a;
	a.accept();
	a.display();

	return 0;
}






