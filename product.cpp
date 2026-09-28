#include<iostream>
#include<string>
using namespace std;

class Product
{
	public:
	string id;
	string name;
	float price;
	int MonthlySales[12];

void accept()
{
	cout<<" Enter Product ID :"<<endl;
	cin>>id;
	cout<<" Enter Product Name:"<<endl;
	cin>>name;
	cout<<"Enter Product Price:"<<endl;
	cin>>price;
	cout<<"Enter Montly Sales:"<<endl;
	for(int i=0;i<12;i++)
{
	cout<<"Month:"<<i+1<<endl;
	cin>>MonthlySales[i];
}
}
int TotalQuantity()
{
	int total=0;
	for(int i=0;i<12;i++)
{
	total=total+MonthlySales[i];
}
return total;
}
float Bill()
{
return TotalQuantity()*price;
}
void Display()
{
	cout<<"----Product ID------:"<<id<<endl;
	cout<<"----Product Name-----:"<<name<<endl;
	cout<<"-----Product Price-----:"<<price<<endl;
	cout<<"-----Total Quantity:"<<TotalQuantity()<<endl;
	cout<<"---TOTAL BILL:"<<Bill()<<endl;
}
};
int main()
{
	int number;
	cout<<"Enter number of Products:";
	cin>>number;

Product P[number];
for(int i=0;i<number;i++)
{
	cout<<"Enter Product details for product:"<<i+1<<endl;
	P[i].accept();
}
	cout<<"==========All Product Details:========"<<endl;
	cout<<"================================="<<endl;
	for(int i=0;i<number;i++)
{
	cout<<"Details of Product:"<<i+1<<endl;
	P[i].Display();
	cout<<"================================================"<<endl;

}
	return 0;
}
