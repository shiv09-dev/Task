#include<iostream>
using namespace std;

class Student
{
	public:
			string name , gender;
			int age;
			
			void getBasicinfo()
			{
				cout<<"Enter Name : ";
				cin>>name;
				cout<<"Enter Gender : ";
				cin>>gender;
				cout<<"Enter Age : ";
				cin>>age;
			}
			
			void displayinfo()
			{
				cout<<"Name of the Student is : "<<name<<endl;
				cout<<"Gender of the Student is : "<<gender<<endl;
				cout<<"Age of the Student is : "<<age<<endl;
			}
				
};

class Result : public Student
{
	public:
			int total , marks;
			string grade;
			float percent;
			
			void getResult()
			{
				cout<<"Enter Marks : ";
				cin>>marks;
				cout<<"Enter Total Marks : ";
				cin>>total;
				
				percent = (total / marks) * 100;
				
				if(percent > 80)\
					{
						grade = "A+";
					}
				else
					{
						grade = "B+";
					}	
			}
			
			void displayResult()
			{
				getBasicinfo();
				cout<<"\n";
				
				getResult();
				cout<<"\n";
				
				displayinfo();
				
				cout<<"\n";
				cout<<"Percentage is : "<<percent<<endl;
				cout<<"Grade is : "<<grade<<endl;	
			}	
};

int main()
{
	Result r;
	
	r.displayResult();
}
