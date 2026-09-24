#include<iostream>
#include<string>
using namespace std;

class Student
{
	public:
	int roll_number;
	string studentname;
	int marks;

void accept()
	{
	cout<<"Enter your name:"<<endl;
	cin.ignore();
	getline(cin,studentname);
	cout<<"Enter roll number:"<<endl;
	cin>>roll_number;
	cout<<"Enter marks:"<<endl;
	cin>>marks;
	}

void calculateResult()
	{
	if(marks>=40)
	{
	cout<<"result is pass"<<endl;
	}
	else
	{
	cout<<"result is fail"<<endl;
	}
}	
	
void display()
	{
		cout<<"\n---Student Details---"<<endl;
		cout<<"The name of the student is:"<<studentname<<endl;
		cout<<"the rollNumber is:"<<roll_number<<endl;
		cout<<"marks:"<<marks<<endl;

		calculateResult();
	}
};

int main()
{
	Student s;

	s.accept();
	s.display();
	return 0;
}
