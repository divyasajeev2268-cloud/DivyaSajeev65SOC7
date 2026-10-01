#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		int id;
		string name;
		float basicsalary;
		float bonus;
		float totalsalary;
public:
Employee()
{
id=0;
name="unknown";
basicsalary=0;
bonus=0;
totalsalary=0;
cout<<"The default constructor is called";
}

Employee(int id,string n,float s,float b)
{
id=id;
name=n;
basicsalary=s;
bonus=b;
calculateTotalSalary();
cout<<"Parameterized constructor is called"<<endl;
}
void  calculateTotalSalary()
{
	totalsalary = basicsalary + bonus;
}

void display()
{
	cout<<"\n-----EMPLOYEE DETAILS-----"<<endl;
	cout<<"The Employee id is :"<<id<<endl;
	cout<<"The Employee name is:"<<name<<endl;
	cout<<"The Basic Salary is:"<<basicsalary<<endl;
	cout<<"The Bonus is:"<<bonus<<endl;
	cout<<"The Total Salary:"<<totalsalary<<endl;
}
};

int main()
{
Employee e1;
e1.display();
Employee e2(123,"Pruthvi",50000,5000);
e2.display();
return 0;
}

