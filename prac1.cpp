//Multiple Inheritance

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

class Deptinfo
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
};

class Employee : private Basicinfo , private Deptinfo
{
	public: 
		
				void get_Employee_Details()
				{
						cout<<"Basic Info of Employee";
						cout<<"\n \n";
						getBasicinfo();
						
						cout<<"\n";
						
						cout<<"Department info of Employee";
						cout<<"\n \n";
						getdeptinfo();
				}
				
				void display_Employee_Details()
				{
					cout<<"Details of Employee are : ";
					cout<<"\n \n ";
					
					cout<<"Id of the Employee : "<<id<<endl;
					cout<<"Name of the Employee : "<<name<<endl;
					cout<<"Gender of the Employee : "<<gender<<endl;
					
					cout<<"Department of the Employee : "<<dept_name<<endl;
					cout<<"Assigned Work to the Employee : "<<assigned_work<<endl;
					cout<<"Time required to complete Assigned Work : "<<time_to_complete<<endl;
				}	
};

int main()
{
	Employee e;
	
	e.get_Employee_Details();
	
	cout<<"\n \n";
	
	e.display_Employee_Details();
}

