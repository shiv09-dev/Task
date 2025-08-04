#include<iostream>
using namespace std;

class Person
{
	public:
			int age;
			string name;
			string address;
			
			void getdetails()
			{
				cout<<"Enter name : ";
				cin>>name;
				cout<<"Enter age : ";
				cin>>age;
				cout<<"Enter the address : ";
				cin>>address;	
			}
};

class Student : public Person
{
	private:
				int roll_no;
	public:
			void display()
			{
				cout<<"Details of Student : "<<endl;
				cout<<"\n";
				
				getdetails();
				
				cout<<"Enter Roll NO : ";
				cin>>roll_no;				
			}	
};

class Teacher : public Person
{
	private:
				string depart;
	public:
			void display()
			{
				cout<<"Details of Teacher : "<<endl;
				cout<<"\n";
				
				getdetails();
				
				cout<<"Enter Department : ";
				cin>>depart;
			}	
};

int main()
{
	
	Student s;
	s.display();
	
	cout<<"\n \n ";
			
	Teacher t;
	t.display();
}
