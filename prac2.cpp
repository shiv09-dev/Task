#include<iostream>
using namespace std;

class Basicinfo
{
	protected:
				int id;
				string name , gender;
				
	public:			
				void getBasicinfo()
				{
					cout<<"Enter id : ";
					cin>>id;
					cout<<"Enter name : ";
					cin>>name;
					cout<<"Enter Gender : ";
					cin>>gender;			
				}	
};

class Deptinfo : private Basicinfo
{
	protected:
				string dept_name , assigned_work;
				int time_to_complete;
	
	public:
				void getdeptinfo()
				{
					cout<<"Enter Department Name : ";
					cin>>dept_name;
					cout<<"Enter Assigned Work : ";
					cin>>assigned_work;
					cout<<"Enter Time to Complete ( in Hours) : ";
					cin>>time_to_complete;	
				}
					
				void display()
				{				
					cout<<"Department of the Employee : "<<dept_name<<endl;
					cout<<"Assigned Work to the Employee : "<<assigned_work<<endl;
					cout<<"Time required to complete Assigned Work : "<<time_to_complete<<endl;
				}
};



class Loaninfo : private Basicinfo
{
	protected:
				string loan_details;
				int amount;
	
	public:
				void getloaninfo()
				{
					getBasicinfo();
					cout<<"\n";
					cout<<"Enter Loan details : ";
					cin>>loan_details;
					cout<<"Enter amount of the loan : ";
					cin>>amount;
				}
				
					void display_loan_info()
				{
					cout<<"Details of Customer is : ";
					cout<<"\n \n ";
					
					cout<<"Id of the Employee : "<<id<<endl;
					cout<<"Name of the Employee : "<<name<<endl;
					cout<<"Gender of the Employee : "<<gender<<endl;
					cout<<"\n";
					
					cout<<"Detials of the Loan is : "<<loan_details<<endl;
					cout<<"Total Amount of Loan is : "<<amount<<endl;
					cout<<"\n";
				}	
};

int main()
{
	Loaninfo l;
	l.getloaninfo();
	cout<<"\n";
	
	Deptinfo d;
	d.getdeptinfo();
	cout<<"\n";
	
	l.display_loan_info();
	d.display();
}
